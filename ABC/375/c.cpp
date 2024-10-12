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
    cin >> n;
    vector<string> mat(n);
    rep(i, n) {
        string s;
        cin >> s;
        mat[i] = s;
    }

    rep(i, n / 2) {
        rep(j, (i+1) % 4) {
            for(int x = i; x < n-1 - i; x++) {
                char tmp = mat[x][n-1-i];
                mat[x][n-1-i] = mat[i][x];
                mat[i][x] = mat[n-1-x][i];
                mat[n-1-x][i] = mat[n-1-i][n-1-x];
                mat[n-1-i][n-1-x] = tmp;
            }
        }
    }
    
    for(auto s: mat) {
        cout << s << endl;
    }
}