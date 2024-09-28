#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> ans(n, LLONG_MIN);
  vector<vector<pair<ll, ll>>> g(n);

  rep(i, m) {
    ll a, b, c;
    cin >> a >> b >> c;
    a--, b--;
    g[a].push_back({b, c});
    g[b].push_back({a, -c});
  }

  vector<bool> seen(n, false);
  vector<ll> todo = {};

  rep(i, n) {
    if(seen[i]) continue;
    ans[i] = 0;
    todo = {};
    todo.push_back(i);
    while (!todo.empty()) {
      ll v = todo.back();
      todo.pop_back();
      seen[v] = true;
      for(auto [w, cost]: g[v]) {
        if(seen[w]) continue;
        seen[w] = true;
        todo.push_back(w);
        ans[w] = ans[v] + cost;
      }
    }
  }
  
  rep(i, n) {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}