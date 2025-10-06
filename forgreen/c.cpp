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
    ll n;
    cin >> n;
    ll cx = 0, cc = 0;
    for (ll i = 0, a, b, d; i < n; i++)
    {
        cin >> a >> b >> d;
        a != 0 ? cc += d : cx += d;
    }
    if (cx > cc)
    {
        cout << 'X' << endl;
        cout << cx - cc;
    }
    else if (cc > cx)
    {
        cout << 'C' << endl;
        cout << cc - cx;
    }
    else
    {
        cout << "draw" << endl;
        cout << 0;
    }
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
