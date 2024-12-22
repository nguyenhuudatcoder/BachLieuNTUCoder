/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, ans = 100005;
long a[2000005], s;
long long t[2000005];
void sub()      ///700ms
{
    for (int i = 0; i < n; i++)
        t[i] = t[i - 1] + a[i];
    long long k;
    int l, r;
    for (int i = 0; i < n; i++)
    {
        r = n - 1;
        l = i;
        while (l <= r)
        {
            int m = (l + r) / 2;
            k = t[m] - t[i - 1];
            if (k >= s)
            {
                ans = min(ans, m - i + 1);
                r = m - 1;
            }
            else
                l = m + 1;
        }
    }
    cout << ans;
}
void sub1()     ///375ms
{
    int l = 0, r = 0;
    long long sum = 0;
    while (l < n && r < n)
    {
        sum += a[r];
        while (l <= r && sum >= s)
        {
            ans = min(ans, r - l + 1);  ///nếu sum>=s thì cập nhật cho đến khi sum<s
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sub1();
}