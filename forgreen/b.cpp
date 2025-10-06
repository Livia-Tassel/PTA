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
using vs = vector<string>;
vs arr = {"3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2"};

ll gi(string val)
{
    for (ll i = 0; i < 13; ++i)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}

void signal(char ch)
{
    if (ch == '3')
        cout << '4' << endl;
    if (ch == '4')
        cout << '5' << endl;
    if (ch == '5')
        cout << '6' << endl;
    if (ch == '6')
        cout << '7' << endl;
    if (ch == '7')
        cout << '8' << endl;
    if (ch == '8')
        cout << '9' << endl;
    if (ch == '9')
        cout << "10" << endl;
    if (ch == 'J')
        cout << 'Q' << endl;
    if (ch == 'Q')
        cout << 'K' << endl;
    if (ch == 'K')
        cout << 'A' << endl;
    if (ch == 'A' || ch == '2')
        cout << "pass" << endl;
}
void db(string s)
{
    if (s == "33")
        cout << "44" << endl;
    if (s == "44")
        cout << "55" << endl;
    if (s == "55")
        cout << "66" << endl;
    if (s == "66")
        cout << "77" << endl;
    if (s == "77")
        cout << "88" << endl;
    if (s == "88")
        cout << "99" << endl;
    if (s == "99")
        cout << "1010" << endl;
    if (s == "JJ")
        cout << "QQ" << endl;
    if (s == "QQ")
        cout << "KK" << endl;
    if (s == "KK")
        cout << "AA" << endl;
    if (s == "AA" || s == "22")
        cout << "pass" << endl;
}

void pris(ll i, ll n)
{
    for (ll j = 1; j <= n; j++)
    {
        cout << arr[i + j];
    }
    cout << endl;
}

void seq(string s)
{
    ll n = s.length();
    if (s[n - 1] == 'A' || s[n - 1] == '2')
        cout << "pass" << endl;
    else
    {
        string tp = {s[0]};
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                n -= 1;
                break;
            }
        }
        if (s[0] == '1')
            pris(gi("10"), n);
        else
            pris(gi(tp), n);
    }
}

void prids(ll i, ll n)
{
    for (ll j = 1; j <= n; j++)
    {
        cout << arr[i + j] << arr[i + j];
    }
    cout << endl;
}

void dseq(string s)
{
    // cout << "s: " << s << endl;
    ll n = s.length();
    if (s[n - 1] == 'A' || s[n - 1] == '2')
        cout << "pass" << endl;
    else
    {
        for (ll i = 0; i < n; i += 2)
        {
            if (s[i] == '1' || s[i] == '0')
            {
                n -= 2;
                break;
            }
        }
        n /= 2;
        string tp = {s[0]};
        // cout << "tp: " << tp << endl;
        if (s[0] == '1')
            prids(gi("10"), n);
        else
            prids(gi(tp), n);
    }
}

void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    if (n == 3 && s[0] == s[1])
    {
        cout << "boom" << endl;
        return;
    }

    if (n == 1)
    {
        signal(s[0]);
    }

    if (n == 2)
    {
        if (s[0] != s[1])
            cout << "J" << endl;
        else
        {
            db(s);
        }
    }

    if (n == 4 && s == "1010")
    {
        cout << "JJ" << endl;
        return;
    }

    if (n >= 3)
    {
        // cout << "n: " << n << endl;
        if (n >= 4 && (s[0] == s[1] || s.substr(0, 4) == "1010"))
        {
            dseq(s);
        }
        else
        {
            seq(s);
        }
    }
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
