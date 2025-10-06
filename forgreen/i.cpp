#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <list>
#include <set>
#include <stack>
#include <map>
#include <numeric>
#include <unordered_map>
using namespace std;
using ll = long long;
using vl = vector<ll>;

void solve(ll n)
{
    vl a(2 * n + 1);
    for (ll i = 1; i <= 2 * n; i++)
        cin >> a[i];
    vl pre(2 * n + 1, 0);
    for (ll i = 1; i <= 2 * n; i++)
        pre[i] = pre[i - 1] + a[i];
    ll ans = LLONG_MAX;
    for (ll l = 1, r = n; r <= 2 * n; l++, r++)
        ans = min(ans, pre[r] - pre[l - 1]);
    cout << pre[2 * n] - ans << endl;
}
signed main()
{
    ll n;
    cin >> n;
    solve(n);
    return 0;
}