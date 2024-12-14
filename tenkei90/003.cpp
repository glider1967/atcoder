#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> g(n);
  rep(i, n-1) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  auto dfs = [&](int s) -> pair<int, int> {
    vector<int> d(n, -1);
    d[s] = 0;
    stack<int> st({s});
    while (!st.empty()) {
      int u = st.top();
      st.pop();
      for (auto v: g[u]) {
        if(d[v] == -1) {
          st.push(v);
          d[v] = d[u] + 1;
        }
      }
    }
    int mpos = -1;
    int mval = -1;
    rep(i, n) {
      if(mval < d[i]) {
        mval = d[i];
        mpos = i;
      }
    }
    return {mpos, mval};
  };

  auto d0 = dfs(0);
  auto dv = dfs(d0.first);
  cout << dv.second + 1 << endl;
}