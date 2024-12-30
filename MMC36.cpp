///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n,x,chan,le,demchan,demle;
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
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x%2==0)
        {
            chan=max(chan,x);
            demchan++;
        }
        else
        {
            le=max(le,x);
            demle++;
        }
    }
    cout<<demchan<<"\n"<<demle<<"\n"<<chan<<"\n"<<le;
}