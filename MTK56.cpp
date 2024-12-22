///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
long long x;
bool check(long long n)
{
    long long s=1;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0)
        {
            s+=i+n/i;
            if(i*i==n) s-=i;
        }
    return s==n;
}
int tcs(long long n)
{
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int ans=0;
    while(n--)
    {
        cin>>x;
        ans+=check(tcs(x));
    }
    cout<<ans;
}
