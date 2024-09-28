#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  ll ma = LLONG_MIN;
  rep(i, n) {
    ll a;
    cin >> a;
    ma = max(ma, a);
  }
  ll mb = LLONG_MIN;
  rep(i, n) {
    ll b;
    cin >> b;
    mb = max(mb, b);
  }

  cout << ma + mb << endl;
  return 0;
}