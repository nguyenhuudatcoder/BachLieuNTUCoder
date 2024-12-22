///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long n,k;
long a[1000005];
void farthestgrass(int l,int& i,long long power,long& times)
{
    ///tìm vị trí cỏ xa nhất bị nổ trong phạm vi quả bom
    int ans=n-1;
    if(power>=a[n-1])
    {
        times++;
        i=ans;
        return;
    }
    int r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]<=power)
        {
            ans=m;
            l=m+1;
        }
        else r=m-1;
    }
    times++;
    i=ans;
}
void bomb()
{
    long long ans=0;
    long long effective=(a[n-1]-a[0])/2;   ///quả bom oneshot(1 bên)
    long long l=1,r=effective;
    while(l<=r)
    {   
        long times=0;
        long long m=(l+r)/2;     /// chọn m là sức mạnh của quả bom
        // cout<<"bomb's power="<<m<<",bombs needed:";
        for(int i=0;i<n;i++)
        {
            farthestgrass(i,i,a[i]+2*m,times);    
            ///a[i]+2*m tìm vị trí quả bom nổ xa nhất
        }
            // cout<<times<<"\n";
        if(times<=k)
        {
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
    cout<<ans;
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
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    bomb();
}