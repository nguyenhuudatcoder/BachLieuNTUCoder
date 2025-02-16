///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,s,a[100005];
int d;
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
    cin>>n>>s;
   for(int i=0;i<n;i++)cin>>a[i];
   sort(a,a+n);
    for(int i=0;i<n;i++)if(s>=a[i]){s+=a[i];d++;}cout<<d;
}