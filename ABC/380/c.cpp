#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<pair<char, int>> m;
  char current = s[0];
  int count = 1;
  rep(i, n-1) {
    if(s[i+1] == current) {
      count++;
    } else {
      m.push_back({current, count});
      current = s[i+1];
      count = 1;
    }
  }
  m.push_back({current, count});

  if (m[0].first == '0') {
    auto tmp = m[2*k-1];
    m[2*k-1] = m[2*k-2];
    m[2*k-2] = tmp;
  } else {
    auto tmp = m[2*k-2];
    m[2*k-2] = m[2*k-3];
    m[2*k-3] = tmp;
  }
  string res;
  for(auto p : m) {
    res.append(p.second, p.first);
  }
  cout << res << endl;
}