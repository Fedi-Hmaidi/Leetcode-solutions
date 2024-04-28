typedef long long ll;
const int N = 3e5 + 5;

const int E = 1e6 + 5;

#define neig(u, v, e, g) for (int e = g.head[u], v; ~e && ((v = g.to[e]), 1); e = g.nxt[e])

class ADJ {
   public:
    int head[E], to[E], nxt[E], n, edgcnt = 0;
    ll cst[E];

    void addEdge(int a, int b, int c = 0) {
        nxt[edgcnt] = head[a];
        head[a] = edgcnt;
        to[edgcnt] = b;
        cst[edgcnt] = c;
        edgcnt++;
    }

    void addBiEdge(int a, int b, int c = 0) {
        addEdge(a, b, c);
        addEdge(b, a, c);
    }
    void init(int _n) {
        n = _n;
        memset(head, -1, n * sizeof(head[0]));
        edgcnt = 0;
    }
} adj;

class Solution {
   public:
    int dpcnt[N];
    int dpsm[N];
    void dfs(int u, int p = -1) {
        dpcnt[u] = 1;
        dpsm[u] = 0;
        neig(u, v, e, adj) {
            if (v == p) continue;
            dfs(v, u);
            dpcnt[u] += dpcnt[v];
            dpsm[u] += dpsm[v] + dpcnt[v];
        }
    }
    void solve(int u, vector<int>& ans, int upsm = 0, int upcnt = 0, int p = -1) {
        ans[u] = dpsm[u] + upsm;
        upsm += dpsm[u];
        upcnt += dpcnt[u];
        neig(u, v, e, adj) {
            if (v == p) continue;
            solve(v, ans, upsm - dpsm[v] - dpcnt[v] + adj.n - dpcnt[v], upcnt - dpcnt[v], u);
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        adj.init(n);
        for (auto& u : edges) {
            adj.addBiEdge(u[0], u[1]);
        }
        vector<int> ans(n, 0);
        dfs(0);
        solve(0, ans);
        return ans;
    }
};