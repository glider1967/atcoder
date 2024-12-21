#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

int main() {
  int a[5];
  rep(i, 5) {
    cin >> a[i];
  }

  vector<pair<int, string>> dict;

  rep(k, 32) {
    if(k == 0) continue;

    int sum = 0;
    string name = "";
    rep(i, 5) {
      if(k & (1 << i)) {
        sum += a[i];
        name += "ABCDE"[i];
      }
    }
    dict.push_back({sum, name});
  }

  sort(dict.begin(), dict.end(), [](auto a, auto b) {return (a.first > b.first) || (a.first == b.first && a.second < b.second);});
  for(auto [sum, name]: dict) {
    cout << name << endl;
  }
}