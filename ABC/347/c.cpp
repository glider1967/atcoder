#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;

  ll max = -1, min = 10000000000;
  rep(i, n) {
    ll d;
    cin >> d;
    ll dd = d % (a + b);
    if(max < dd) max = dd;
    if(min > dd) min = dd;
  }

  bool ans = (max - min) < a;

  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}