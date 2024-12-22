///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,m,d[100005],v[100005];
ll ans;
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
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>d[i];
    for(int i=0;i<m;i++) cin>>v[i];
    sort(d,d+n,greater<int>());
    sort(v,v+m);
    for(int i=0;i<n;i++)
        ans+=1ll*d[i]*v[i];
    cout<<ans;
}