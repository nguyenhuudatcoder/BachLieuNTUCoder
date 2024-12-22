///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
unsigned int n;
unsigned int a;
bool check(unsigned int n)
{
    if(n<10) return 0;
    while(n>0)
    {
        int dv=n%10;
        int hc=n%100/10;
        if(hc>dv) return 0;
        n/=10;
    }
    return 1;
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
        cin>>a;
        ans+=check(a);
    }
    cout<<ans;
}
