#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

int main() {
  int n; ll s;
  cin >> n >> s;
  vector<ll> acc;
  ll sum = 0;
  rep(i, n) {
    ll x; cin >> x;
    sum += x;
    acc.push_back(sum);
  }
  ll allsum = acc[n-1];
  s %= allsum;
  if (s == 0) {
    cout << "Yes" << endl;
    return 0;
  }

  rep(i, n) {
    int l = i;
    int r = n;
    while (r - l > 1) {
      int mid = l + (r - l) / 2;
      ll sub = acc[mid] - acc[i];

      if(sub == s) {
        cout << "Yes" << endl;
        return 0;
      } else if(sub < s) {
        l = mid;
      } else {
        r = mid;
      }
    }
  }
    
  rep(i, n) {
    int l = i;
    int r = n;
    while (r - l > 1) {
      int mid = l + (r - l) / 2;
      ll sub = acc[mid] - acc[i];

      if(allsum - sub == s) {
        cout << "Yes" << endl;
        return 0;
      } else if(allsum - sub >= s) {
        l = mid;
      } else {
        r = mid;
      }
    }
  }

  cout << "No" << endl;
}