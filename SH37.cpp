///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
long long a;
bool check(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
         return 0;
    return 1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>a;
        long long m=sqrt(a);
        if(m*m==a&&check(m)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
