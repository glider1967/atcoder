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
  char c1, c2;
  cin >> n >> c1 >> c2;
  string s;
  cin >> s;
  rep(i, s.size()) {
    if(s[i] == c1) {
      cout << c1;
    } else {
      cout << c2;
    }
  }
  cout << endl;
}