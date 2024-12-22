/// Discipline > Motivation
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll s, tam;
int n;
bool used[15];
vector<int> a;
vector<ll> ans;
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
bool test(ll a, ll m, ll k, ll n)
{
    a %= n;
    ll ans = 1;
    while (m > 0)
    {
        if (m & 1)
            ans = tich(ans, a, n) % n;
        a = tich(a, a, n) % n;
        m /= 2;
    }
    if (ans == 1 || ans == n - 1)
        return 1;
    for (int i = 1; i < k; i++)
    {
        ans = tich(ans, ans, n) % n;
        if (ans == 1)
            return 0;
        if (ans == n - 1)
            return 1;
    }
    return 0;
}
vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23};
bool RabinMiller(ll n)
{
    if(n<=tam/10) return 0;
    for (auto a : prime)
        if (n == a)
            return 1;
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
void ghepso(int trash)
{
    for (int i = 0; i < n; i++)
    {
        if (used[i] == 0)
        {
            s = s * 10 + a[i];
            used[i] = 1;
            if (RabinMiller(s))
            {
                ans.push_back(s);
            }
            ghepso(trash + 1);
            s /= 10;
            used[i] = 0;
        }
    }
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
    tam = pow(10, n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    ghepso(0);
    if (ans.size() == 0)
        cout << -1;
    else
    {
        sort(ans.begin(), ans.end());
        for (ll i = 0; i < ans.size(); i++)
            cout << ans[i] << "\n";
    }
}