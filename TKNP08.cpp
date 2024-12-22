/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long m, a[1000005];
void wood(long long r)
{
    // long long r=1e9;
    long long l = 0;
    long long s = 0;
    long long ans;
    while (l <= r)
    {
        long long mid = (l + r) / 2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mid)
                s += a[i] - mid;
        }
        if (s >= m)
        {
            l = mid + 1;
            ans = mid;
        }
        else if (s < m)
            r = mid - 1;
        s = 0;
    }
    cout << ans;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    long long Max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        Max = max(Max, a[i]);
    }
    // long long Max = *max_element(a, a + n);
    wood(Max);
}