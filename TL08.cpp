///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,x;
int a[5],ans;
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
        a[x]++;
    }
    ans+=a[4];
    ans+=a[2]/2;
    a[2]%=2;
    x=min(a[1],a[3]);
    ans+=x;
    a[1]-=x;
    a[3]-=x;
    ans+=a[3];
    if(a[2]>0)
    {
        ans++;
        a[1]=max(a[1]-2,0);
    }
    ans+=(a[1]+3)/4;
    cout<<ans;
}