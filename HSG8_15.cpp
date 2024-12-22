///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long n;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int ans=0;
    long t=1,m=1;
    while(n>m)
    {
        ans+=t*9*m;
        t++;
        m*=10;
    }
    m/=10;
    t--;    
    ans-=t*9*m;
    long s=n-m+1;
    ans+=s*t;
    cout<<ans;
}