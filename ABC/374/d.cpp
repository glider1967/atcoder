#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

void print(const std::vector<int>& v)
{
  std::for_each(v.begin(), v.end(), [](int x) {
    std::cout << x << " ";
  });
  std::cout << std::endl;
}

long double dist(pair<int, int> l, pair<int, int> r){
  ll v=0;
  v += (l.first - r.first)*(l.first - r.first);
  v += (l.second - r.second)*(l.second - r.second);
  return sqrtl((ld)v);
}

int main(){
  int n, s, t;
  cin >> n >> s >> t;
  vector<pair<int, int>> x(n), y(n);
  rep(i, n) {
    cin >> x[i].first >> x[i].second >> y[i].first >> y[i].second;
  }

  ld res = 8e18;
  vector<int> p;
  rep(i, n) {
    p.push_back(i);
  }

  do{
    rep(i, (1 << n)) {
      ld cres = 0.0;
      pair<int, int> cur = {0, 0};
      rep(j, n) {
        int el = p[j];
        if (i&(1<<j)) {
          cres += ( dist(cur, x[el]) / ((ld)s) );
          cres += ( dist(x[el], y[el]) / ((ld)t) );
          cur = y[el];
        } else {
          cres += ( dist(cur, y[el]) / ((ld)s) );
          cres += ( dist(y[el], x[el]) / ((ld)t) );
          cur = x[el];
        }
      }
      res = min(res, cres);
    }
  } while (next_permutation(p.begin(), p.end()));

  std::cout << fixed << setprecision(12) << res << endl;
  return 0;
}