/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int t, n;
long h[1005];
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        int res = 0;
        int ans[1005] = {};
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> h[i];
        for(int i=0;i<n;i++)
            ans[i]=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
                if (h[j] < h[i])
                    ans[i]=max(ans[i],ans[j]+1);
        }
        for(int i=0;i<n;i++)
            res=max(res,ans[i]);
        cout<<res<<"\n";
    }
}