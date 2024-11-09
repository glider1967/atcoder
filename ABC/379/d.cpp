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
  int q;
  cin >> q;
  vector<ll> v;
  ll geta = 0;
  rep(i, q) {
    int x;
    cin >> x;
    if (x == 1) {
      v.push_back(geta);
    } else if (x == 2) {
      ll t;
      cin >> t;
      geta += t;
    } else {
      ll h;
      cin >> h;
      auto l = upper_bound(v.begin(), v.end(), geta - h);
      cout << l - v.begin() << endl;
      v.erase(v.begin(), l);
    }
  }
}