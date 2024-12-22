///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,ans;
long x,k,a;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>x>>k;
    while(n--)
    {
        cin>>a;
        if(abs(a-x)<=k)
            ans++;
    }
    cout<<ans;
}