/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
vector<int> a;
string x;
int m, maxx;
int l, r;
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
    cin >> n;
    while (n--)
    {
        cin >> x >> x >> x >> m;
        a.push_back(m);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i + 1] > a[i])
        {
            if (a[i + 1] - a[i]-1 > maxx)
            {
                maxx = a[i + 1] - a[i]-1;
                l = a[i]+1;
                r = a[i + 1]-1;
            }
        }
    }
    if (maxx==0)
    {
        cout << -1;
    }
    else
    {
        cout << maxx << "\n"
             << l << " " << r;
    }
}