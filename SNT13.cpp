/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll ans;
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
    cin >> n;
    while (n > 0)
    {
        ll m = n % 10;
        if (m == 2 || m == 3 || m == 5 || m == 7)
            ans += m;
        n /= 10;
    }
    if(ans==0) cout<<-1;else
    cout << ans;
}