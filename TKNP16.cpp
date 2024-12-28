///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,k,x[50005],ans;
int bom(int power)
{
    int bomber=1;
    int next=x[0]+power;
    for(int i=0;i<n;i++)
    {
        if(x[i]>next)
        {
            bomber++;
            next=x[i]+power;
        }
    }
    return bomber;
}
void ChatGPT()
{
    int l=1,r=x[n-1]-x[0]+1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(bom(2*m)<=k)
        {
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
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
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>x[i];
    sort(x,x+n);
    ChatGPT();
    cout<<ans;

}