///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<array>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=13051984;
ll dp[1000005];
int n,k,x;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    while(k--){
        cin>>x;
        dp[x]=-1;
    }
    dp[-1]=0;
    dp[0]=1;
    for(int i=1;i<=n;i++)
        if(dp[i]==-1)
            dp[i]=0;
        else
            dp[i]=(dp[i-1]+dp[i-2])%mod;
    cout<<dp[n];
}