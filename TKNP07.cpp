/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k, a[15005];
ll ans;
    ll l, r;
void zxy()
{
    while (l <= r)
    {
        ll m = (l + r) / 2;
        ll s = 0;
        int box = 0;
        for (int i = 0; i < n; i++)
        {
            if (s + a[i] > m)
            {
                box++;
                s = 0;
            }
            s += a[i];
        }
        if (s > 0)
            box++;
        if (box <= k)
        {
            ans = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout << ans;
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
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    l=1ll**max_element(a,a+n);
    for(int i=0;i<n;i++) r+=a[i];
    zxy();
}