ios::sync_with_stdio(false);
cin.tie(NULL);

// 辗转相除
long long gcd(long long a, long long b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

// set
vector<set<long long>> _sets = vector<set<long long>>(MAXN, set<long long>());
for (long long x : _sets[a])
{
    if (_sets[b].count(x))
    {
        share++;
    }
    else
    {
        diff++;
    }
}
double similarity = share / (_sets[b].size() + diff);

// 删除
s.earse(val);
s.earse(it);
s.earse(first, last); // 迭代
s.clear();

// 查询
s.find(val);
s.count(val);
s.empty();
s.size();

// 平衡树
s.begin() / s.end();
s.lower_bound(val); // 大于等于val的首个迭代
s.upper_bound(val); // 大于val的首个迭代

// map
for (auto p : mp)
{
    cout << p.first << " " << p.second << endl;
}
for (auto it = mp.begin(); it != mp.end(); it++)
{
    cout << it->first << " " << it->second << endl;
}
mp.insert({"apple", 10});
mp["apple"] = 10;
mp.earse("apple");
mp.earse(mp.find("apple"));
mp.clear();
mp.find("apple");
mp.count("apple");
mp.empty();
mp.size();

// sort
bool compare(const student &s1, const student &s2)
{
    return s1.score > s2.score;
}
bool compare(const pair<auto, auto> &a, const pair<auto, auto> &b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
    }
    else
    {
        return a.second < b.second;
    }
}
// arr
auto arr[] = {1, 2, 3, 4, 5};
sort(arr, arr + 5);
// vector
vector<auto> v;
sort(v.begin(), v.end());
vector<pair<auto, auto>> vp;
sort(vp.begin(), vp.end(), compare);
vector<pair<auto, auto>> ans(mp.begin(), mp.end());

// 图BFS
struct node
{
    auto x, y;
};
auto dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
node start;
start.x = p;
start.y = q;
queue<node> nq;
nq.push(start);
while (nq.empty())
{
    start = nq.front();
    nq.pop();
    auto tx, ty;
    for (auto i = 0; i < 4; i++)
    {
        tx = start.x + dir[i][0];
        ty = start.y + dir[i][1];
        if (tx <= m && tx > 0 && ty <= n && ty > 0 && map[tx][ty] == '.')
        {
            // 标记
            map[tx][ty] = '#';
            nq.push({tx, ty});
        }
    }
}

// 图DFS
void DFS(auto x, auto y)
{
    // 标记
    room[x][y] = '#';
    print_walk(x, y);
    for (auto i = 0; i < 4; i++)
    {
        auto tx = x + dir[i][0];
        auto ty = y + dir[i][1];
        if (tx <= m && tx > 0 && ty <= n && ty > 0 && map[tx][ty] == '.')
        {
            DFS(tx, ty);
            // room[tx][ty]='.';
            print_back(x, y);
        }
    }
}

// sieve
const auto LIMIT = 10000000;
vector<auto> Is_Prime(LIMIT + 1, 0);
void sieve(auto n)
{
    for (auto i = 2; i <= n; i++)
    {
        if (Is_Prime[i] == 0)
        {
            for (auto m = 2 * i; m <= n; m += i)
            {
                Is_Prime[m] = 1;
            }
        }
    }
}

// Union_Find
auto s[MAXN];
void init()
{
    for (auto i = 0; i < MAXN; i++)
    {
        s[i] = i;
    }
}
void froot(auto u)
{
    if (s[u] != u)
    {
        s[u] = froot[s[u]];
    }
    else
    {
        return u;
    }
}
void set_union(auto u, auto v)
{
    if (s[u] != s[v])
    {
        s[s[v]] = s[u];
    }
}
// 带权并查
void init(auto l, auto r)
{
    for (auto i = l; i <= r; i++)
    {
        s[i] = i;
        // i → root
        val[i] = 0;
    }
}
auto froot(auto x)
{
    if (s[x] == x)
    {
        return x;
    }
    auto root = froot(s[x]);
    // val[x] = sum[x→par[x]] + sum[par[x]→root]
    val[x] += val[s[x]];
    return s[x] = root;
}

// tree
struct node
{
    auto val;
    node *l, *r;
    node(auto _val = 0, node *_l = NULL, node *_r = NULL) : val(_val), l(_l), r(_r) {}
};
void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->val;
        preorder(root->l);
        preorder(root->r);
    }
}

// 贪心
// 选取终止时间最早的活动
bool comp(const acti &a, const acti &b)
{
    return a.end < b.end;
}
vector<acti> activities(n);
sort(activities.begin(), activities.end().comp);
for (auto i = 0; i < n; i++)
{
    if (activities[i].start >= end_time)
    {
        count++;
        end_time = activities[i].end;
    }
}

// DP
auto solve()
{
    memset(bone_back, 0, sizeof(bone_back));
    // 装前i个骨头
    for (auto i = 1; i <= N; i++)
    {
        for (auto j = 0; j <= V; j++)
        {
            if (bone[i].vol > j)
            {
                bone_back[i][j] = bone_back[i - 1][j];
            }
            else
            {
                bone_back[i][j] = max(bone_back[i - 1][j], bone_back[i - 1][j - bone[i].vol] + bone[i].val);
            }
        }
    }
    return bone_back[N][V];
}

// 快速幂
auto quick_pow(auto a, auto n)
{
    if (n == 1)
    {
        return a;
    }
    auto temp = quick_pow(a, n / 2);
    if (n % 2 == 0)
    {
        return temp * temp;
    }
    else
    {
        return a * temp * temp;
    }
}
// 逆元
auto mod_pow(auto a, auto b, auto mod = MOD)
{
    auto res = 1;
    a %= mod;
    while (b)
    {
        // b & 1 == 1，则 res *= a
        if (b & 1)
            res = res * a % mod;
        // a^1 -> a^2 -> a^4 -> a^8...
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
// (7 / 3) % 998244353 ❌
// (7 * 3^(-1)) % 998244353 ✅
// fermat's little theorem:
// a^(-1) = a^(MOD - 2) % MOD，即 3^(-1) = 3^(998244353 - 2) % 998244353
auto mod_inv(auto a)
{
    return mod(a, MOD - 2);
}
vector<auto> x(n + 1), y(n + 1); // P_i = x_i / y_i
for (auto i = 1; i <= n; i++)
{
    cin >> x[i] >> y[i];
}
// dp[i] = 1 + (1 - P_{i+1}) * dp[i+1] + P_{i+1} * dp[0] ①
// 线性 dp[i] = A[i] + B[i] * dp[0] ②
// 将 dp[i+1] = A[i+1] + B[i+1] * dp[0] 代入 ① 式中
// dp[i] = 1 + (1 - P_{i+1}) * (A[i+1] + B[i+1] * dp[0]) + P_{i+1} * dp[0] ③
// 对比 ②，③ 式得
// A[i] = 1 + (1 - P_{i+1}) * A[i+1]
// B[i] = (1 - P_{i+1}) * B[i+1] + P_{i+1}
vector<auto> A(n + 1), B(n + 1);
A[n] = 0;
B[n] = 0;
for (auto i = n - 1; i >= 0; i--)
{
    // Pi = x[i+1] / y[i+1]
    auto xi = x[i + 1], yi = y[i + 1];
    auto Pi_num = xi, Pi_den = yi;
    // 1 - Pi = (y[i+1] - x[i+1]) / y[i+1]
    auto neg_Pi_num = (yi - xi + MOD) % MOD, neg_Pi_den = yi;

    // A[i] = 1 + (1 - Pi) * A[i+1]
    auto ta1 = 1;
    auto ta2 = neg_Pi_num * mod_inv(neg_Pi_den) % MOD * A[i + 1] % MOD;
    A[i] = (ta1 + ta2) % MOD;

    // B[i] = (1 - Pi) * B[i+1] + Pi
    auto tb1 = neg_Pi_num * mod_inv(neg_Pi_den) % MOD * B[i + 1] % MOD;
    auto tb2 = Pi_num * mod_inv(Pi_den) % MOD;
    B[i] = (tb1 + tb2) % MOD;
}
// dp[0] = A[0] / (1 - B[0])
auto nume = A[0];
auto deno = (1 - B[0] + MOD) % MOD;
auto ans = nume * mod_inv(deno) % MOD;

// 树
struct edge
{
    auto index, to, w;
    edge(auto i, auto t, auto w) : index(i), to(t), w(w) {}
};
vector<edge> e[MAXN];
// 若无权值
// vector<auto> G[MAXN];
for (auto i = 0; i < m; i++)
{
    cin >> dex >> to >> w;
    e[dex].push_back(edge(dex, to, w));
}
for (auto i = 0; i < e[u].size(); i++)
{
    cout << e[u][i].index << "->" << e[u][i].to << "权值：" << e[u][i].w << endl;
}

// Floyd-G[i][j]
for (auto i = 1; i <= n; i++)
{
    for (auto j = 1; j <= n; j++)
    {
        G[i][j] = INF;
    }
}
while (m--)
{
    auto u, v, w;
    cin >> u >> v >> w;
    G[u][v] = G[v][u] = w;
}
void Floyd()
{
    auto s = 1;
    for (auto k = 1; k <= n; k++)
    {
        for (auto i = 1; i <= n; i++)
        {
            for (auto j = 1; j <= n; j++)
            {
                if (G[i][j] > G[i][k] + G[k][j])
                {
                    G[i][j] = G[i][k] + G[k][j]
                }
            }
        }
    }
}

// Dijkstra
struct edge
{
    auto index, to, w;
    edge(auto i, auto t, auto w) : index(i), to(t), w(w) {}
};
vector<edge> e[MAXN];
struct node
{
    auto id, dis;
    node(auto i, auto dis) : id(i), dis(dis) {}
    bool operator<(const node &n)
    {
        return dis > n.dis;
    }
} auto n, m, pre[N];
void Print_Path(auto s, auto t)
{
    if (s == t)
    {
        cout << s << " ";
        return;
    }
    Print_Path(s, pre[t]);
    cout << t << " ";
}
void Dijkstra()
{
    auto s = 1;
    vector<auto> dis(N + 1, INF);
    vector<bool> vis(N + 1, false);
    dis[s] = 0;
    priority_queue<node> Q;
    Q.push(node(s, dis[s]));
    while (!Q.empty())
    {
        node t = Q.front();
        Q.pop();
        if (vis[t.id])
        {
            continue;
        }
        vis[t.id] = true;
        for (auto i = 0; i < e[t.id].size(); i++)
        {
            edge tv = e[t.id][i];
            auto v = tv.to;
            if (vis[v])
            {
                continue;
            }
            if (dis[v] > t.w + t.dis)
            {
                dis[v] = t.dis + t.w;
                Q.push(node(v, dis[v]));
                pre[v] = t.id;
            }
        }
    }
}

// Kruskal
auto Kruskal()
{
    auto ans = 0;
    init();
    sort(edge + 1, edge + m + 1, compare);
    for (auto i = 1; i <= m; i++)
    {
        auto u = edge[i].u;
        auto v = edge[i].v;
        if (froot(v) != froot(u))
        {
            set_union(u, v);
            ans += edge[i].w;
        }
    }
    return ans;
}

// upper_bound
vector<auto> arr, tail;
for (auto num : arr)
{
    auto it = upper_bound(tail.begin(), tail.end(), num);
    if (it == tail.end())
    {
        tail.push_back(num);
    }
    else
    {
        *it = num;
    }
}

// 二分
while (l <= r)
{
    auto mid = (l + r) / 2;
    if (check(mid))
    {
        ans = mid;
        r = mid - 1;
    }
    else
    {
        l = mid + 1;
    }
}

// 异或
// a ^ b = x，则有 a ^ x = b, b ^ x = a
for (auto i = 1; i <= n; i++)
{
    auto data;
    cin >> data;
    // if data ^ x not in mp, then mp[data ^ x] == 0, dp[i] = dp[i - 1]
    dp[i] = max(dp[i - 1], mp[data ^ x]);
    mp[data] = i;
}

// 全排列
vector<ll> comb(25, 0);
fill(comb.begin(), comb.begin() + 13, 1);

do
{
    array<char, 25> board;
    // 1，0 映射为玩家
    for (ll i = 0; i < 25; ++i)
    {
        board[i] = (comb[i] ? 'W' : 'B');
    }
    // 双方均未胜利，平局
    if (!check(board, 'W') && !check(board, 'B'))
    {
        count++;
    }
} while (prev_permutation(comb.begin(), comb.end())); // 枚举所有可能
