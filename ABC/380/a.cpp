#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

int main() {
  string n;
  cin >> n;
  int one = count(n.begin(), n.end(), '1');
  int two = count(n.begin(), n.end(), '2');
  int three = count(n.begin(), n.end(), '3');
  cout << ((one == 1 && two == 2 && three == 3) ? "Yes" : "No") << endl;
}