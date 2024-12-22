///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n;
ll sumDiv(ll n)
{
    ll s=0;
    for(ll i=1;i<=sqrt(n);i++)
        if(n%i==0)
        {
            s+=i;
            if(i*i!=n)
                s+=n/i;
        }
    return s;
}
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
    cout<<sumDiv(n);
}