///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a,b,c,d;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c>>d;
    int e=c/__gcd(c,d)*d;
    cout<<(a-1)/e+b/e;
}
