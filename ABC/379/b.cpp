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
  int n, k;
  cin >> n >> k;
  int sum = 0;
  int c = 0;
  rep(i, n) {
    char x;
    cin >> x;
    if (x == 'O') {
      c++;
      if (c == k) {
        c = 0;
        sum++;
      }
    } else {
      c = 0;
    }
  }
  cout << sum << endl;
}