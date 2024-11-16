#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

void print(const std::vector<int>& v) {
  std::for_each(v.begin(), v.end(), [](int x) { std::cout << x << " "; });
  std::cout << std::endl;
}

int main() {
  vector<pair<ll, ll>> direction = {
    {2, 1},
    {1, 2},
    {-2, 1},
    {-1, 2},
    {2, -1},
    {1, -2},
    {-2, -1},
    {-1, -2},
  };
  ll n, m;
  cin >> n >> m;
  set<pair<ll, ll>> exc;
  rep(i, m) {
    ll a, b;
    cin >> a >> b;
    a--; b--;
    exc.insert({a, b});
    for(auto [p, q] : direction) {
      if(a + p >= 0 && a + p < n && b + q >= 0 && b + q < n)
        exc.insert({a + p, b + q});
    }
  }
  cout << n * n - exc.size() << endl;
}