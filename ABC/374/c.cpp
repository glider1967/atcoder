#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using mint = modint998244353;

int main() {
    int n;
    cin >> n;
    ll ks[n];
    ll sum = 0;
    rep(i, n) {
        ll k;
        cin >> k;
        ks[i] = k;
        sum += k;
    }

    ll ans = 2e+9;
    rep(i, (1 << n)) {
        ll local = 0;
        rep(j, n) {
            if(i & (1 << j)) local += ks[j];
        }
        ans = min(ans, max(local, sum - local));
    }
    cout << ans << endl;
}