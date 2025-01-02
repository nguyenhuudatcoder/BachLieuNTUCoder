///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int t,k;
int f[100];
void fibonacchi()
{
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=92;i++)
        f[i]=f[i-1]+f[i-2];
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
    cin>>t;
        fibonacchi();
    while(t--)
    {
        cin>>k;
        cout<<f[k]<<"\n";
    }
}