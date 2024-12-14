#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

struct Corr
{
  int y;
  int x;
  int d;
};

vector<int> y_vec = {0, 0, -1, +1};  // 進む方向の簡便化，テクニックとして覚えておく．
vector<int> x_vec = {-1, +1, 0, 0};  // ループで回すことで上下左右に移動できるようになっている

int main() {
  int h, w, D;
  cin >> h >> w >> D;

  vector<string> s;
  rep(i, h) {
    string st;
    cin >> st;
    s.push_back(st);
  }


  rep(i, h) {
    rep(j, w) {
      if(s[i][j] == 'H') {
        queue<Corr> q;
        Corr st = {i, j, D};
        q.emplace(st);
        while (!q.empty()) {
          Corr now = q.front(); q.pop();

          if (now.d == 0) continue;

          for (int t = 0; t < 4; ++t) {
            Corr next = {now.y + y_vec[t], now.x + x_vec[t], now.d - 1};
            if (0 <= next.y && next.y <= h-1 && 0 <= next.x && next.x <= w-1) {
              if (s[next.y][next.x] == '.' || s[next.y][next.x] == 'o') {
                s[next.y][next.x] = 'x';
                q.push(next);
              }
            }
          }
        }
      rep(p, h) {
        rep(q, w) {
          if(s[p][q] == 'x') s[p][q] = 'o';
        }
      }
      }
    }
  }

  int count = 0;
  rep(i, h) {
    rep(j, w) {
      if(s[i][j] == 'H' || s[i][j] == 'o') {
        count++;
      }
    }
  }
  cout << count << endl;
}