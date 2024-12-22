///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,m;
pair<int,int> farmer[5005];
ll ans;
bool compare(pair<int,int> a,pair<int,int> b)
{
    return a.first<b.first;
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
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>farmer[i].first>>farmer[i].second;
    sort(farmer,farmer+m,compare);
    for(int i=0;i<m;i++)
        if(farmer[i].second>=n)
        {
            cout<<ans+1ll*n*farmer[i].first;
            exit(0);
        }
        else{
            ans+=1ll*farmer[i].first*farmer[i].second;
            n-=farmer[i].second;
        }
    cout<<ans;
}