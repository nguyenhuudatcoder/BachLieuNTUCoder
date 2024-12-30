/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, x, dem1, dem2;
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
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < 0)
        {
            ans += dem1;
            dem2++;
        }
        else if(x>0)
        {
            ans += dem2;
            dem1++;
        }
    }
    cout << ans;
}