///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long a,b,x,y;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>x>>y;
    long modx=b/x-(a-1)/x;
    long mody=b/y-(a-1)/y;
    long xy=x/__gcd(x,y)*y;
    long modxy=b/xy-(a-1)/xy;
    cout<<modx+mody-modxy;
}