///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n;
ll ans=1;
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
    for(ll i=2;i*i<=n;i++)
        if(n%i==0)
        {
            int dem=0;
            while(n%i==0)
            {
                dem++;
                n/=i;
            }
                ans*=(dem+1);
        }
    if(n>1) ans*=2;
    cout<<ans;
}