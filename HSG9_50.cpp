/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
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
    while (cin >> s)
    {
        int h = 0, m = 0;
        int i = 0;
        while (s[i] != ':')
        {
            h = h * 10 + s[i] - 48;
            i++;
        }
        i++;
        // cout<<s[i]<<" ";
        while (i < s.size())
        {
            m = m * 10 + s[i] - 48;
            i++;
        }
        // cout<<h<<" "<<m;
        if (h != 0 || m != 0)
        {
            h %= 12;
            double a = 1.0 * h, b = 1.0 * m;
            a = (1.0 * a * 5 + 1.0 * b / 12);
            double ans = 1.0 * abs(a - b);
            if (ans > 30)
                ans = 60 - ans;
            cout << fixed << setprecision(3) << ans * 6 << "\n";
        }
    }
}