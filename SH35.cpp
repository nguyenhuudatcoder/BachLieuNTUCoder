///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n;
int dao(ll n)
{
    int ans=0;
    while(n>0)
    {
        ans=ans*10+n%10;
        n/=10;
    }return ans;
}bool ktnt(ll n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
    return 1;
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
    cin>>n;
    if(ktnt(n)&&ktnt(dao(n))) cout<<1;
    else cout<<0;
}