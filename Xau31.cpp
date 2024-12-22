///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string a,b;
bool dem[260];
long ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        if(dem[a[i]]==0)
            ans++;
        dem[a[i]]=1;
    }
    for(int i=0;i<b.size();i++)
    {
        if(dem[b[i]]==0)
            ans++;
        dem[b[i]]=1;
    }
    cout<<ans;
}