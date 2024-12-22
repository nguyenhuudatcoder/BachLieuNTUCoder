///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string n;
int dem[10];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n.size();i++)
        dem[n[i]-48]++;
    int ans=INT_MAX;
    for(int i=0;i<10;i++)
        ans=min(ans,dem[i]);
    cout<<ans;
}
