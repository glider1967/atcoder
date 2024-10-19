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
    int ans = -1;
    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> b(n-1);
    rep(i, n-1) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    int i = n-2;
    while(b[i] >= a[i+1]) {
        i--;
    }
    ans = a[i+1];
    while(i >= 0) {
        if(b[i] < a[i]) {
            ans = -1;
            break;
        }
        i--;
    }
    cout << ans << endl;
}