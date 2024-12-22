///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long k,a[100005];
void cut()
{
    long long ans=0;
    long long l=1,r=1000000001;
    while(l<=r)
    {
        long long m=(l+r)/2;
        long long vai=0;
        for(int i=0;i<n;i++)
            vai+=a[i]/m;
        if(vai<k)
            r=m-1;
        else
        {
            ans=m;
            l=m+1;
        }
    }
    cout<<ans;
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
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cut(); 
}  