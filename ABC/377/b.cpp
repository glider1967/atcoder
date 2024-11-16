#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

void print(const std::vector<int>& v) {
  std::for_each(v.begin(), v.end(), [](int x) { std::cout << x << " "; });
  std::cout << std::endl;
}

int main() {
  vector<bool> row(8, true);
  vector<bool> col(8, true);
  rep(i, 8) {
    string x;
    cin >> x;
    rep(j, 8) {
      if(x[j] == '#') {
        row[i] = false;
        col[j] = false;
      }
    }
  }
  int r = count(row.begin(), row.end(), true);
  int c = count(col.begin(), col.end(), true);
  cout << r * c << endl;
}