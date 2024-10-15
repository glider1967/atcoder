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

void print2(const std::vector<vector<int>>& v) {
  for (auto vv : v) {
    print(vv);
  }
}

int main() {
  string s;
  cin >> s;
  vector<ll> num(26), sum(26);
  ll ans = 0;
  int n = s.size();
  rep(i, n) {
    int v = s[i] - 'A';
    ans += (i - 1) * num[v] - sum[v];
    num[v]++;
    sum[v] += i;
  }
  cout << ans << endl;
}