///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n,x,a[1000005];
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
    cin>>n>>x;
    int ans=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i]+a[j]==x)ans++;


    cout<<ans;}