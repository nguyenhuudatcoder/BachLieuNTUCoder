///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int a,b;

int tonguoc(int n)
{
    int ans=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ans+=i;
            if(i!=n/i)
                ans+=n/i;
        }
    }return ans;
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
    cin>>a>>b;
    int ans=0;
    for(int i=a;i<=b;i++)
    {
        if(tonguoc(i)>i)
            ans++;
    }cout<<ans;
}