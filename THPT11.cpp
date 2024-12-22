/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int m, n, k;
bool snt[1000005];
int ans;
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= 1e3; i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= 1e6; j += i)
                snt[j] = 1;
}
bool modk(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s % k == 0;
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
    make_sieve();
    cin >> m >> n>>k;
    for (int i = m; i <= n; i++)
        if (snt[i] == 0)
            ans += modk(i);
    cout << ans;
}