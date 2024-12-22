/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long b[1000005], c[1000005];
long long ans = LONG_LONG_MAX;
void game()     ///tìm c[m] gần b[i] nhất
{
    for (int i = 0; i < n; i++)
    {
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            long long s = b[i] + c[m];
            if (s == 0)             ///nhỏ nhất
            {
                cout << 0;
                exit(0);
            }
            else if (s > 0)         ///nếu số dương thì giảm để gần hơn
            {
                ans = min(ans, s);
                r = m - 1;
            }
            else                    /// nếu số âm thì tăng để gần hơn
            {
                ans = min(ans, abs(s));
                l = m + 1;
            }
        }
    }
    cout << ans;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    // sort(b, b + n);
    sort(c, c + n);
    game();
}