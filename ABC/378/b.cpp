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
  int n;
  cin >> n;
  vector<int> q(n), r(n);
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    q[i] = x; r[i] = y;
  }
  int qn;
  cin >> qn;
  rep(i, qn) {
    int t, d;
    cin >> t >> d;
    t--;
    int mod = d % q[t];
    if(mod <= r[t]) {
      d += r[t] - mod;
    } else {
      d += r[t] - mod + q[t];
    }
    cout << d << endl;
  }
}