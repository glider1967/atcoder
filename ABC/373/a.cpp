#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int ans = 0;
  rep(i, 12) {
    string s;
    cin >> s;
    if(s.size() == i+1) ans++;
  }
  cout << ans << endl;
  return 0;
}