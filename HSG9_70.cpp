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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] <= '9')
        {
            int m = 0;
            while (s[i] <= '9' && i < s.size())
            {
                m = m * 10 + (s[i] - 48);
                i++;
            }
            cout << char(m);
        }
    }
}