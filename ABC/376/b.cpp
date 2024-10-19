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
    int n, q;
    cin >> n >> q;
    int ans = 0, l = 0, r = 1;
    rep(i, q) {
        char h; int t;
        cin >> h >> t;
        t--;
        if(h == 'R') {
            if (t == r) continue;
            int incl = r;
            int ic = 0;
            while (true) {
                ic++;
                incl = (incl + 1) % n;
                if(incl == l) {
                    ic = 10000;
                    break;
                }
                if(incl == t) break;
            }
            int decl = r;
            int dc = 0;
            while (true) {
                dc++;
                decl = (decl + n - 1) % n;
                if(decl == l) {
                    dc = 10000;
                    break;
                }
                if(decl == t) break;
            }
            ans += min(ic, dc);
            r = t;
        }
        if(h == 'L') {
            if (t == l) continue;
            int incl = l;
            int ic = 0;
            while (true) {
                ic++;
                incl = (incl + 1) % n;
                if(incl == r) {
                    ic = 10000;
                    break;
                }
                if(incl == t) break;
            }
            int decl = l;
            int dc = 0;
            while (true) {
                dc++;
                decl = (decl + n - 1) % n;
                if(decl == r) {
                    dc = 10000;
                    break;
                }
                if(decl == t) break;
            }
            ans += min(ic, dc);
            l = t;
        }
    }
    cout << ans << endl;
}