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

int h, w;

ll dfs(vector<string> mat, int k, int i, int j) {
  if(k == 0) return 1;
  mat[i][j] = '#';
  ll ans = 0;
  if(i > 0 && mat[i-1][j] == '.') {
    ans += dfs(mat, k-1, i-1, j);
  }
  if(i < h-1 && mat[i+1][j] == '.') {
    ans += dfs(mat, k-1, i+1, j);
  }
  if(j > 0 && mat[i][j-1] == '.') {
    ans += dfs(mat, k-1, i, j-1);
  }
  if(j < w-1 && mat[i][j+1] == '.') {
    ans += dfs(mat, k-1, i, j+1);
  }
  return ans;
}

int main() {
  int k;
  cin >> h >> w >> k;
  vector<string> orig(h);
  rep(i, h) {
    string x;
    cin >> x;
    orig[i] = x;
  }
  ll ans = 0;
  rep(i, h) {
    rep(j, w) {
      if(orig[i][j] == '#') continue;
      ans += dfs(orig, k, i, j);
    }
  }
  cout << ans << endl;
}
