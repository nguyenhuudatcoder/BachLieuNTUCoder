/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long ans, a[50000005], k;
long long x;
void sh12()
{
    if (k == 1)
    {
        cout << 0;
        exit(0);
    }
    ans = k - k % x;
    // long long s;
    // cout<<m<<"\n";
    for (long long i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
        {
            ans = max(ans, k - k % i);
            ans = max(ans, k - k % (x / i));
        }

    // if (ans == 1)
    //     ans = 0;
    // else
    cout << ans;
    // cout<<__gcd(12,0);
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
    x = __gcd(a[0], a[1]);
    for (int i = 2; i < n; i++)
        x = __gcd(x, a[i]);
    // if (x == 1)
    // {
    //     cout << 0;
    //     exit(0);
    // }
    sh12();
}