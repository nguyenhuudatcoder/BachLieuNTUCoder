/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, ans;
ll x;
// ll tich(ll a, ll b, ll c)
// {
//     a%=c;
//     ll ans = 0;
//     while (b > 0)
//     {
//         if (b & 1)
//             ans = (ans + a) % c;
//         a = 2 * a % c;
//         b /= 2;
//     }
//     return ans;
// }
ll luythua(ll a, ll b, ll c)
{
    a%=c;
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans = ans*a%c;
        a = a*a%c;
        b /= 2;
    }
    return ans;
}
bool test(ll a, ll m, int k, ll n)
{
    ll ans = luythua(a, m, n);
    if (ans == 1 || ans == n - 1)
        return 1;
    for (int i = 1; i < k; i++)
    {
        ans = ans*ans%n;
        if (ans == n - 1)
            return 1;
        if (ans == 1)
            return 0;
    }
    return 0;
}
vector<ll> prime = {2, 3, 5, 7};
bool RabinMiller(ll n)
{
    for (auto a : prime)
        if (a == n)
            return 1;
    if (n < 11)
        return 0;
    ll m = n - 1;
    int k = 0;
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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (RabinMiller(x))
            ans++;
    }
    cout << ans;
}