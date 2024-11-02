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
  int n, m;
  cin >> n >> m;
  vector<ll> sum(n+1);
  sum[0] = 0;
  ll ans = 0;
  rep(i, n) {
    ll x;
    cin >> x;
    sum[i+1] = sum[i] + x;
  }
  rep(r, n+1) {
    rep(l, r) {
      ans += (sum[r] - sum[l]) % m;
    }
  }
  cout << ans << endl;
}