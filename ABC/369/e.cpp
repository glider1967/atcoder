#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (ll)1e+15
#define REP(i, st, end) for(int i = st; i < end; i++)
#define REP0(i, end) for(int i = 0; i < end; i++)

int main() {
  ll N, M;
  cin >> N >> M;
  ll U[M], V[M], T[M], t[N][N];
  REP0(i, N) REP0(j, N) {
    if(i == j) t[i][j] = 0;
    else t[i][j] = INF;
  }
  REP0(i, M) {
    cin >> U[i] >> V[i] >> T[i];
    U[i]--; V[i]--;
    t[U[i]][V[i]] = min(t[U[i]][V[i]], T[i]);
    t[V[i]][U[i]] = min(t[V[i]][U[i]], T[i]);
  }
  // REP0(i, N) { REP0(j, N) {
  //   cout << t[i][j] << " ";
  // } cout << endl; }
  
  // Floyd–Warshall
  REP0(k, N) REP0(i, N) REP0(j, N) {
    t[i][j] = min(t[i][j], t[i][k] + t[k][j]);
  }
  REP0(i, N) { REP0(j, N) {
    cout << t[i][j] << " ";
  } cout << endl; }
  
  ll Q;
  cin >> Q;
  REP0(q, Q) {
    ll K;
    cin >> K;
    ll B[K];
    REP0(k, K) {
      cin >> B[k];
      B[k]--;
    }
    
    ll ans = INF;
    vector<ll> perm; // 橋を渡る順番
    // dp[k][0] k番目の橋をV -> Uの向きにわたるときにかかる時間の最小
    // dp[k][1] k番目の橋をU -> Vの向きにわたるときにかかる時間の最小
    ll dp[K][2];
    REP0(i, K) perm.push_back(i);
    do {
      // 0 -> K_1
      dp[0][0] = t[0][V[B[perm[0]]]] + T[B[perm[0]]];
      dp[0][1] = t[0][U[B[perm[0]]]] + T[B[perm[0]]];
      REP0(i, K-1) {
        dp[i+1][0] = min(
          dp[i][0] + t[U[B[perm[i]]]][V[B[perm[i+1]]]],
          dp[i][1] + t[V[B[perm[i]]]][V[B[perm[i+1]]]]
          ) + T[B[perm[i+1]]];
        dp[i+1][1] = min(
          dp[i][0] + t[U[B[perm[i]]]][U[B[perm[i+1]]]],
          dp[i][1] + t[V[B[perm[i]]]][U[B[perm[i+1]]]]
          ) + T[B[perm[i+1]]];
      }
      // K_k -> n
      ll tmp = min(dp[K-1][0] + t[U[B[perm[K-1]]]][N-1],
                   dp[K-1][0] + t[U[B[perm[K-1]]]][N-1]);
      ans = min(ans, tmp);
    } while(next_permutation(perm.begin(), perm.end()));
    cout << ans << endl;
  }
}