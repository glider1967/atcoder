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
  vector<int> x(m), a(m);
  rep(i, m) {
    int xi;
    cin >> xi;
    x[i] = xi;
  }
  sort(x.begin(), x.end());
  rep(i, m) {
    int ai;
    cin >> ai;
    a[i] = ai;
  }
  sort(a.begin(), a.end(), [&](int i, int j) { return x[i] < x[j]; });
  int ans = 0;
  vector<int> geta;
  for (auto xx : x) {
    int am = a[xx] - 1;
    for (auto g : geta) {
      if (xx <= g) am++;
    }
    ans += am * (am + 1) / 2;
    geta.push_back(xx + am);
  }

  cout << ans << endl;
}