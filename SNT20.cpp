/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int t;
ll n;
vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
ll tich(ll a, ll b, ll c)
{
    ll res = 0;
    while (b > 0)
    {
        if (b & 1)
            res = (res + a) % c;
        a = 2 * a % c;
        b /= 2;
    }
    return res;
}
ll luythua(ll a, ll b, ll c)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = tich(res, a, c);
        a = tich(a, a, c);
        b /= 2;
    }
    return res;
}
bool test(ll a, ll m, ll k, ll n)
{
    ll res = luythua(a, m, n);
    if (res == 1 || res == n - 1)
        return 1;
    for (ll i = 1; i < k; i++)
    {
        res = tich(res, res, n);
        if (res == n - 1)
            return 1;
        if (res == 1)
            return 0;
    }
    return 0;
}
bool MillerRabin(ll n)
{
    for (auto a : prime)
        if (n == a)
            return 1;
    if (n < 41)
        return 0;
    ll m = n - 1, k = 0;
    while (m % 2 == 0)
    {
        k++;
        m /= 2;
    }
    for (auto a : prime)
        if (test(a, m, k, n) == 0)
            return 0;
    return 1;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (MillerRabin(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}