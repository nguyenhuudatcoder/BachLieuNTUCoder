///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string p;
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
    cin>>p;
    int a=0;
    for(int i=0;i<p.size();i++)
    {
        a=a*10+p[i]-48;
        char m=a;
        if(m>='a'&&m<='z')
        {
            cout<<m;
            a=0;
        }
    }
}