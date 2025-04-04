///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int L,R;
int d[1000005];
bool snt[100005];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(1e5);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e5;j+=i)
                snt[j]=1;
}
void ChatGPT()
{
    for(int i=0;i<=R-L;i++)
        d[i]=1;
    make_sieve();
    for(int i=2;i<=sqrt(R);i++){
        int t=(L+i-1)/i;
        if(snt[i]==0)
            for(int j=t*i;j<=R;j+=i)
                d[j-L]=0;
    }
    d[-1]=0;
    for(int i=0;i<R-L;i++)
        d[i]=d[i-1]+d[i];
    cout<<d[R-L-1];
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>L>>R;
    ChatGPT();
}