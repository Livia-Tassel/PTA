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
    ll a, b, c;
    cin >> a >> b;
    cin >> c;

    ll diff = (a + b - c) / 2;
    for (ll i = 0; i < 63; i++)
    {
        if (diff & (1LL << i))
            cout << i << " ";
    }
    cout << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
