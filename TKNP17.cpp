/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n, k;
long long h[10000005];
long long ans=0;
int left(int i)     /// tìm số bằng h[i]+k gần nhất
{
    int r=n-1,l=i+1;
    int ans=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(h[m]==h[i]+k)
        {
            ans=m;
            r=m-1;
        }
        else if(h[m]>h[i]+k)
            r=m-1;
        else l=m+1;
    }
    return ans;
}
int right(int i)        ///tìm số bằng h[i]+k xa nhất
{
    int r=n-1,l=i;
    int ans=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(h[i]==h[m])
        {
            ans=m;
            l=m+1;
        }
        else if(h[i]>h[m])
            l=m+1;
        else r=m-1;
    }
    return ans;     ///nếu ans=-1 thì không thỏa mãn
}
void couple(int i)
{
    long l=left(i),r=right(l);
    if(h[l]==h[r]/*thỏa mãn điều kiện*/&&h[l]==h[i]+k&&l!=-1/*như trên*/)
        ans+=r-l+1;
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
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    sort(h,h+n);
    for(int i=0;i<n;i++)
    {
        couple(i);
    }
    cout<<ans;
}