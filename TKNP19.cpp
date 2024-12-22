///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
ll s,t[25],ans;
void ChatGPT()
{
    ll l=1,r=1e18;
    while(l<=r)
    {
        ll m=(l+r)/2;
        ll cake=0;
        for(int i=0;i<n;i++)
            cake+=m/t[i];
        if(cake>=s)
        {
            ans=m;
            r=m-1;
        }
        else
        l=m+1;
    }
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
    cin>>s>>n;
    for(int i=0;i<n;i++) cin>>t[i];
    ChatGPT();
    cout<<ans;
}