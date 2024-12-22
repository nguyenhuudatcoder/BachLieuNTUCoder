///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a,b,c,n,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>a>>b>>c;
    int ab=a/__gcd(a,b)*b;
    int ac=a/__gcd(a,c)*c;
    int bc=b/__gcd(b,c)*c;
    int abc=ab/__gcd(ab,c)*c;
    int acb=ac/__gcd(ac,b)*b;
    int bca=bc/__gcd(bc,a)*a;
    int m1=abc/__gcd(abc,acb)*acb;
    int m=m1/__gcd(m1,bca)*bca;
    ans=n/ab+n/ac+n/bc-n/abc-n/acb-n/bca;
    cout<<ans;

}
