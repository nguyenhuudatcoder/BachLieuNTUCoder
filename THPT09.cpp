///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
ll Min[1000005],x,ans=-inf;
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
    cin>>x;
    Min[0]=x;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        ans=max(ans,x-Min[i-1]);
        Min[i]=min(Min[i-1],x);
    }
    cout<<ans;
}