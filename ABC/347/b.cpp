#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string S;
  cin >> S;

  set<string> sub;
  rep(i, S.size()) {
    rep(j, S.size() - i) {
      sub.insert(S.substr(i, j + 1));
    }
  }

  cout << sub.size() << endl;
  return 0;
}