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
  vector<int> num(4, 0);
  rep(i, 4) {
    int x;
    cin >> x;
    x--;
    num[x]++;
  }
  int sum = 0;
  rep(i, 4) {
    sum += num[i] / 2;
  }
  cout << sum << endl;
}