///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n,a[200005];

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
    for(int i=0;i<2*n;i++)
        cin>>a[i];
    sort(a,a+n);
    sort(a+n,a+2*n,greater<ll>());
    for(int i=0;i<2*n;i++)
        cout<<a[i]<<" ";
}