/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
#define mod 1000000007
using namespace std;
int t;
ll n;
ll product(ll a, ll b, ll n)
{
    a %= n;
    ll ans = 0;
    while (b > 0)
    {
        if (b & 1)
            ans = (ans + a) % n;
        a = (2 * a) % n;
        b /= 2;
    }
    return ans;
}
bool luythua(ll a, ll m, ll k, ll n)
{
    a %= n;
    ll ans = 1;
    while (m > 0)
    {
        if (m & 1)
            ans = product(ans, a, n) % n;
        a = product(a, a, n) % n;
        m /= 2;
    }
    if (ans == 1||ans==n-1)
        return 1;
    for (int i = 1; i < k; i++)
    {
        ans = product(ans, ans, n) % n;
        if (ans == 1)
            return 0;
        if (ans == n - 1)
            return 1;
    }
    return 0;
}
bool RabinMiller(ll n)
{
    vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (auto i : prime)
        if (n == i)
            return 1;
    if (n < 41)
        return 0;
    ll k = 0, m = n - 1;
    while (m % 2 == 0)
    {
        k++;
        m /= 2;
    }
    for (auto a : prime)
    {
        if (luythua(a, m, k, n) == 0)
            return 0;
    }
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
        if (RabinMiller(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}