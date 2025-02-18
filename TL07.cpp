///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,m,a[10005];
int d,t;
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
    cin>>n>>m;for(int i=0;i<n;i++)cin>>a[i];
    if(m==1){cout<<0;exit(0);}
    sort(a,a+n,greater<int>());
    t+=a[0];d++;
    for(int i=1;i<n;i++)
    {
        if(t>=m){cout<<d;exit(0);}
        t+=a[i]-1;d++;
    }

    cout<<-1;
}