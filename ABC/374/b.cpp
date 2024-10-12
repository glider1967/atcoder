#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using mint = modint998244353;

int main() {
    string s, t;
    cin >> s;
    cin >> t;
    if(s == t) {
        cout << 0 << endl;
        return 0;
    }
    int ans = 0;
    while(s[ans] == t[ans]) ans++;
    cout << ans+1 << endl;
}