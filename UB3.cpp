///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int demu(int n)
{
    int dem=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
            dem+=i+n/i;
        if(i*i==n)  dem-=i;
    }
    return dem;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cout<<demu(n);
}
