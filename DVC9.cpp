/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, a[100005], p;
ll Min[100005];
void ChatGPT(ll i)
ll ans;
{
    ll l = 0, r = i - 1;
    while (l <= r)
    {
        ll j = (l + r) / 2;
        if (a[i] - Min[j] >= p)
        {
            ans = max(ans, i - j);
            r = j - 1;
        }
        else
            l = j + 1;
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
    cin >> n >> p;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    Min[0] = a[0];
    for (ll i = 1; i < n; i++)
        Min[i] = min(Min[i - 1], a[i]);
    for (ll i = 1; i < n; i++)
        ChatGPT(i);
    cout << ans;
}