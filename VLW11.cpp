///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long long n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=2 ;i<=sqrt(n);i++)
        while(n%i==0)
    {
        cout<<i<<" ";
        n/=i;
    }
    if(n>1) cout<<n;
}
