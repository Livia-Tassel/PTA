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
#define ll long long
using namespace std;
using vl = vector<ll>;

void solve()
{
    ll x, a, b, c, cnt = 0;
    cin >> x >> a >> b >> c;
    for (ll i = 0; i < c && cnt < 6; i++)
    {
        x *= 5;
        cnt++;
    }
    for (ll i = 0; i < b && cnt < 6; i++)
    {
        x *= 3;
        cnt++;
    }
    for (ll i = 0; i < a && cnt < 6; i++)
    {
        x *= 2;
        cnt++;
    }
    cout << x;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    while (t--)
    {
        solve();
    }
}
