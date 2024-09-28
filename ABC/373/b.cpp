#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string s;
  cin >> s;
  vector<int> pos(26, 0);
  rep(i, 26) {
    pos[s[i] - 'A'] = i;
  }

  int ans = 0;
  rep(j, 25) {
    ans += abs(pos[j+1] - pos[j]);
  }

  cout << ans << endl;
  return 0;
}