
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, K;
  cin >> N >> K;

  rep(i, N) {
    int Ai;
    cin >> Ai;
    if(Ai % K == 0)
      cout << Ai / K << " ";
  }

  cout << endl;
  return 0;
}