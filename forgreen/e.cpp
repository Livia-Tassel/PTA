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
    ll n, cnt = 0, flag = 0;
    cin >> n;
    set<double> s;
    for (ll i = 0, a, b; i < n; i++)
    {
        cin >> a >> b;
        if (a == 0)
        {
            if (b == 0)
            {
                flag = 1;
            }
            else
            {
                cnt = 1;
            }
            continue;
        }
        s.insert((b * b * 1.0) / (2.0 * a));
    }
    if (s.empty() && cnt == 0)
    {
        cout << flag << endl;
    }
    // else length(s);
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
