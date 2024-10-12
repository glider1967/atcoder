#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

void print(const std::vector<int>& v)
{
  std::for_each(v.begin(), v.end(), [](int x) {
    std::cout << x << " ";
  });
  std::cout << std::endl;
}

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int sum = 0;
    rep(i, n-2) {
        if(s[i] == '#' && s[i+1] == '.' && s[i+2] == '#') sum++;
    }
    cout << sum << endl;
}