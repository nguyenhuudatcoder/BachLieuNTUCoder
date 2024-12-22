///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
int a;
bool snt[10000005];
int pre[10005],ans;
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(1e7);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e7;j+=i)
                snt[j]=1;
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
    make_sieve();
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        pre[i]=pre[i-1]+a;
    }
    // for(int i=1;i<=n;i++)
    //     cout<<pre[i]<<" ";
    for(int i=1;i<=n;i++)
        for(int j=0;j<i;j++)
            if(snt[pre[i]-pre[j]]==0)
                ans++;
    cout<<ans;
}