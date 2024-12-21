#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

int main() {
  int n, r;
  cin >> n >> r;
  int sum = r;
  rep(i, n) {
    int d, a;
    cin >> d >> a;
    if(d == 1 && 1600 <= sum && sum <= 2799) {
      sum += a;
    } else if (d == 2 && 1200 <= sum && sum <= 2399) {
      sum += a;
    }
  }
  cout << sum << endl;
}