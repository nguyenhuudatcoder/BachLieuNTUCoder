///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a,b[100005],ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>a;
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++)
        if(a%b[i]==0) ans+=b[i];
    cout<<ans;
}
