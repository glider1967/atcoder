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
  int x = 0;
  for(auto ch : s) {
    if(ch == '|') {
      if(x != 0)
        cout << x << " ";
      x = 0;
    } else {
      x++;
    }
  }
  cout << endl;
}