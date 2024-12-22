///Discipline > Motivation
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll l,g;
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
    cin>>l>>g;
    if(l==g) cout<<l*2;
    else if(g%l==0)
    {
        for(int i=sqrt(g/l);i>=1;i--)
        {
            if((g/l)%i==0)
            {
                cout<<i*l<<" "<<(g/l)/i*l;
                exit(0);
            }
        }
    }
}