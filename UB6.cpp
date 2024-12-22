///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a,b;
int check(int n)
{
    int s=0;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0)
            s+=i+n/i;
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    if(check(a)==b||check(b)==a) cout<<1;
    else cout<<0;
}
