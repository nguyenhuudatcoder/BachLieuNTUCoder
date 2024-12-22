/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, ans;
ll tich(ll a, ll b, ll n)
{
    a %= n;
    ll ans = 0;
    while (b > 0)
    {
        if (b & 1)
            ans = (ans + a) % n;
        a = a * 2 % n;
        b /= 2;
    }
    return ans;
}
ll luythua(ll a, ll b, ll n)
{
    ll ans = 1;
    a %= n;
    if (n > 1e19)
        while (b > 0)
        {
            if (b & 1)
                ans = tich(ans, a, n);
            a = tich(a, a, n) % n;
            b /= 2;
        }
    else
        while (b > 0)
        {
            if (b & 1)
                ans = ans * a % n;
            a = a * a % n;
            b /= 2;
        }

    return ans;
}
vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 23};
bool test(ll a, ll m, int k, ll n)
{
    ll ans = luythua(a, m, n);
    if (ans == 1 || ans == n - 1)
        return 1;
    for (int i = 1; i < k; i++)
    {
        if (n > 1e9)
            ans = tich(ans, ans, n);
        else
            ans = ans * ans % n;
        if (ans == n - 1)
            return 1;
        if (ans == 1)
            return 0;
    }
    return 0;
}
bool RabinMiller(ll n)
{
    for (auto a : prime)
        if (a == n)
            return 1;
    if (n < 29)
        return 0;
    ll m = n - 1;
    int k = 0;
    while (m % 2 == 0)
    {
        k++;
        m /= 2;
    }
    for(auto a:prime)
        if(test(a,m,k,n)==0)
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
    cin >> n;
    ll f0 = 1, f1 = 1;
    while (f0 + f1 <= n)
    {
        ll f2=f0+f1;
        if(RabinMiller(f2)) ans=f2;
        f0=f1;
        f1=f2;
    }
    cout<<ans;
}