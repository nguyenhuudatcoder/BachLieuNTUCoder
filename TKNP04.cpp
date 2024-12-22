///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int a[5000005],n,x;
void tknp04(int x)
{
    int ans=-1;
    int l=0,r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]<=x)
        {
            ans=a[m];
            l=m+1;
        }
        else r=m-1;
    }
    cout<<ans<<"\n";
}
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
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        tknp04(x);
    }
}