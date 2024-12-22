/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll x, pre[200005], ans = inf;
void getMin(ll x, int i, int r)
{
    int l = i + 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        ll y = pre[m] - pre[i];
        ll z = pre[n - 1] - pre[m];
        ans = min(ans, max({x, y, z}) - min({x, y, z}));
        if (y == z)
            return;
        if (y > z)
            r = m - 1;
        else
            l = m + 1;
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
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pre[i] = pre[i - 1] + x;
    }
    for (int i = 0; i < n - 2; i++)
    {
        getMin(pre[i], i, n - 2);
    }
    cout << ans;
}