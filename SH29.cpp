/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
string a, b;
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
    cin >> a >> b;
    int x = a[a.size() - 1] - 48, y = (b[b.size() - 2] - 48) * 10 + (b[b.size() - 1] - 48);
    if (x == 0 || x == 1 || x == 5 || x == 6)
        cout << x;
    else if (x == 2 || x == 3 || x == 7 || x == 8)
    {
        // cout<<y;
        if (b.size() == 1)
            y = b[0] - 48;
        else
        {
            y = y % 4;
            if (y == 0)
                y = 4;
        }
        int m = pow(x, y);
        cout << m % 10;
    }
    else
    {
        y = y % 2;
        if (y == 0)
            y = 2;
        int m = pow(x, y);
        cout << m % 10;
    }
    int m = pow(7, 3);
    // cout << m % 10;
}