#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

int main() {
  auto check = [](string x) -> bool {
    ll count = 0;
    for (auto ch : x) {
      if (ch == '(') count++;
      else count--;

      if(count < 0) return false;
    }
    return (count == 0);
  };

  ll n;
  cin >> n;
  rep(i, (1 << n)) {
    string s = "";
    for(int k = n-1; k >= 0; k--) {
      if (i & (1 << k)) s += ")";
      else s += "(";
    }
    if (check(s)) cout << s << endl;
  }
}