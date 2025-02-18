/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, x;
int a[5], ans;
kien()
{
    // ifd(fopen(".inp","r"))
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
        a[x]++;
    }
    ans += a[4];
    int t = min(a[1], a[3]);
    ans += t;
    a[1] -= t;
    a[3] -= t;
    ans+=a[3];
    ans += a[2] / 2;
    a[2] = a[2] % 2;
    if (a[2])
    {
        ans++;
        a[2] = 0;
        a[1] =max(0,a[1]-2);
    }
    ans+=(a[1]+3)/4;
    cout<<ans;
}