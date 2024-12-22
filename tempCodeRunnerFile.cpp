///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long ans,a[1000005],k;
long long x,m;
void get_smallest_divisor()
{
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
        {
            m=i;
            return;
        }
    m=x;
}
void sh12()
{
    // cout<<m<<"\n";
    ans=k/m;
    ans*=m;
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
    x=a[0];
    for(int i=1;i<n;i++)
        x=__gcd(x,a[i]);
    get_smallest_divisor();
    sh12();
}