///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
unsigned int a,b;
void check(unsigned int a,unsigned int b)
{
    int ans=1;
    map<long long, long long> dem;
    for(int i=2;i<=sqrt(a);i++)
        while(a%i==0)
    {
        dem[i]++;
        a/=i;
    }
    if(a>1) dem[a]++;
    for(int i=2;i<=sqrt(b);i++)
        while(b%i==0)
    {
        dem[i]++;
        b/=i;
    }
    if(b>1) dem[b]++;
    for(auto x:dem)
        ans*=(x.second+1);
    cout<<ans<<"\n";
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        check(a,b);
    }
}
