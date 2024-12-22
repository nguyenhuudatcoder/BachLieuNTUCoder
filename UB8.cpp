///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a,b,c,save=1;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>a>>b>>c;
    int m=a/__gcd(a,b)*b;
    m=m/__gcd(c,m)*c;
    if(m>n) cout<<-1;
    else
    for(int i=m;i<=n;i+=m)
        cout<<i<<" ";
}
