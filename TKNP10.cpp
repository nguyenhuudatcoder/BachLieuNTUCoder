/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long a[1000005];
map<long, int> pos;
map<long, int> ma;
map<long, int> dem;
int ans=1e7;
void rannum()
{
    for (int i = 1; i <= n; i++)
    {
        if (pos[a[i]] == 0)
        {
            if (dem[a[i]] == 1)
            {
                ma[a[i]] = max(i, n - i + 1);
                pos[a[i]] = i;
            }
            else
            {
                ma[a[i]] = i;
                pos[a[i]] = i;
            }
        }
        else
        {
            ma[a[i]] = max(ma[a[i]], i - pos[a[i]]);
            pos[a[i]] = i;
        }
    }
    for (auto i : ma)
    {
        ans = min(ans, i.second);
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
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
    }
    rannum();
}