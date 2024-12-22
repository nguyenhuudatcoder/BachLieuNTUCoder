///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
#define mod 1000000007
using namespace std;
int n,x,f[1000005];
void make_fibo()
{
    f[1]=1;
    int f0=1,f1=1;
    while(f0+f1<=1e6)
    {
        int f2=f0+f1;
        f[f2]=1;
        f0=f1;
        f1=f2;
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
    make_fibo();
    cin>>n;
    bool save=1;
    while(n--)
    {
        cin>>x;
        if(f[x]==1)
        {
            save=0;
            cout<<x<<" ";
        }
    }
    if(save) cout<<0;
}