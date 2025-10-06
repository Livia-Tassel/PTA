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

void guess(ll n)
{
    ll left = 1, right = n + 1, last = -1;
    while (left <= right)
    {
        ll mid = (right + left + 1) / 2;
        if (last == mid)
        {
            cout << "! " << mid << endl;
            cout.flush();
            return;
        }
        last = mid;
        cout << mid << endl;
        cout.flush();
        string response;
        cin >> response;

        if (response == "<")
        {
            right = mid - 1;
        }
        else
        {
            left = mid;
        }
    }
}

signed main()
{
    ll t = 1, n;
    while (t--)
    {
        cin >> n;
        guess(n);
    }
    return 0;
}
