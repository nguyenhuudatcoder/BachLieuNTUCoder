///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
unsigned int l,g;
void check(unsigned int g,unsigned int l)
{
    int m=g;
    while(g<l)
    {
        g*=m;
        l/=m;
    }
    cout<<g+l;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>g>>l;
    if(l%g!=0) cout<<-1;
    else
        check(g,l);
}
