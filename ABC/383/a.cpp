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
  int water = 0;
  int prev = 0;
  rep(i, n) {
    int t, v;
    cin >> t >> v;
    if(t - prev < water) {
      water -= (t - prev);
    } else {
      water = 0;
    }
    water += v;

    prev = t;
  }
  cout << water << endl;
}