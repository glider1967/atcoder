#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

int main() {
  int h, w, d;
  cin >> h >> w >> d;

  vector<string> s;
  rep(i, h) {
    string st;
    cin >> st;
    s.push_back(st);
  }

  int res = 0;
  rep(i, h) {
    rep(j, w) {
      if(s[i][j] == '#') continue;

      rep(k, i+1) {
        rep(l, j+1) {
          if(s[k][l] == '#') continue;

          bool checked[h][w];
          rep(s, h) {
            rep(t, w) {
              checked[s][t] = false;
            }
          }

          for(int p = -d; p <= d; p++) {
            for(int q = -d+abs(p); q <= d-abs(p); q++) {
              if(0 <= i+p && i+p < h && 0 <= j+q && j+q < w)
                checked[i+p][j+q] = true;
            }
          }
          for(int p = -d; p <= d; p++) {
            for(int q = -d+abs(p); q <= d-abs(p); q++) {
              if(0 <= k+p && k+p < h && 0 <= l+q && l+q < w)
                checked[k+p][l+q] = true;
            }
          }

          int count = 0;
          rep(p, h) {
            rep(q, w) {
              if(checked[p][q] && s[p][q] == '.') count++;
            }
          }
          res = max(res, count);
        }
      }
    }
  }

  cout << res << endl;
}