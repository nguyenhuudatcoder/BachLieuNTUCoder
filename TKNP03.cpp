///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,t;
int x;
void search(int x)
{
    int ans=n*n+1;
    int l=1,r=n;
    while(l<=r)
    {
        int m=(l+r)/2;
        int s=m*m+1;
        if(s>=x)
        {
            ans=s;
            r=m-1;
        }
        else l=m+1;
    }
    cout<<ans<<"\n";
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>t;
    while(t--)
    {
        cin>>x;
        search(x);
    }
}