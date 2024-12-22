/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int t;
ll tich(ll a, ll b, ll n)
{
    ll ans = 0;
    a %= n;
    while (b > 0)
    {
        if (b & 1)
            ans = (ans + a) % n;
        a = a * 2 % n;
        b /= 2;
    }
    return ans;
}
bool test(ll a, ll m, ll k, ll n)
{
    ll ans = 1;
    a %= n;
    while (m > 0)
    {
        if (m & 1)
            ans = tich(ans, a, n) % n;
        a = tich(a, a, n) % n;
        m /= 2;
    }
    if (ans == n - 1 || ans == 1)
        return 1;
    for (int i = 1; i < k; i++)
    {
        ans = tich(ans, ans, n) % n;
        if (ans == n - 1)
            return 1;
        if (ans == 1)
            return 0;
    }
    return 0;
}
vector<ll> Prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
bool RabinMiller(ll n)
{
    for (auto a : Prime)
        if (n == a)
            return 1;
    if (n < 41)
        return 0;
    ll k = 0, m = n - 1;
    while (m % 2 == 0)
    {
        k++;
        m /= 2;
    }
    for (auto a : Prime)
        if (test(a, m, k, n) == 0)
            return 0;
    return 1;
}
ll n;
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
        bool answer = RabinMiller(n);
        if (answer == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}