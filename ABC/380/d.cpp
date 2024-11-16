#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

int main() {
  string s;
  cin >> s;
  ll n = (ll)s.size();
  ll q;
  cin >> q;
  rep(i, q) {
    ll k;
    cin >> k;
    k--;
    ll nn = k / n;
    ll mod = k % n;
    char ch = s[mod];
    int count = 0;
    while(nn > 0) {
      if (nn & 1) count++;
      nn >>= 1;
    }
    int parity = count % 2;
    if (parity == 0) {
      cout << ch << " ";
    } else {
      if (islower(ch)) {
        cout << (char)toupper(ch) << " ";
      } else {
        cout << (char)tolower(ch) << " ";
      }
    }
  }
  cout << endl;
}