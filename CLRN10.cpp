///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
double x,y;
char c;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>x>>c>>y;
    cout<<fixed<<setprecision(2);
    if(c=='+') cout<<x+y;
    if(c=='-') cout<<x-y;
    if(c=='*') cout<<x*y;
    if(c=='/') cout<<x/y;
}