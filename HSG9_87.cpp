///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,ans;
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
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        int res=10;
        for(int i=1;i<s.size();i++)
            res=min(res,s[i]-48);
        cout<<s[0]<<res<<"\n";
        ans+=res;
    }
    cout<<ans;
}