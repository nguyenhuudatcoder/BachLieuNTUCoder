///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
unsigned int a,b,c;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c;
    double p=1.0*(a+b+c)/2;
    double s=1.0*sqrt(p*(p-a)*(p-b)*(p-c));
    double r=1.0*2*s/(a+b+c);
//    cout<<;
    cout<<fixed<<setprecision(3)<<1.0*r*r*3.14;
}
