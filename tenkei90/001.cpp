#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

int main() {
  int n, l, k;
  cin >> n >> l >> k;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
  }

  // binsearch
  int left = -1;
  int right = l + 1;
  while (right - left > 1) {
    // x以上にできるか？
    int x = (left + right) / 2;
    int count = 0; // greedyに切ったときの数
    int prev = 0; // 前回切った場所
    rep(i, n) {
      if (a[i] >= x + prev) {
        count++;
        prev = a[i];
      }
    }
    if (l >= x + prev) {
      count++;
    }

    if (count >= k + 1) {
      left = x;
    } else {
      right = x;
    }
  }
  cout << left << endl;
}