#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
using mint = modint998244353;

int main() {
    // 有向グラフの受け取り
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N);
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        G[u].push_back(v);
    }
    
    int INF = 1e9;
    vector<int> dist(N, (int)1e9);
    queue<int> que;

    dist[0] = 0;
    que.push(0);
    while(que.size() > 0) {
        int cur = que.front();
        que.pop();
        for(int v : G[cur]) {
            if (v == 0) {
                cout << dist[cur] + 1 << endl;
                return 0;
            }
            if (dist[v] == INF) {
                dist[v] = dist[cur] + 1;
                que.push(v);
            }
        }
    }
    cout << -1 << endl;
    return 0;
}