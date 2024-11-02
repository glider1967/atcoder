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
  int n;
  cin >> n;
  map<int, int> a;
  rep(i, n) {
    int x;
    cin >> x;
    if(a.find(x) != a.end()) {
      cout << a[x]+1 << endl;
      a[x] = i;
    } else {
      cout << -1 << endl;
      a[x] = i;
    }
  }
}