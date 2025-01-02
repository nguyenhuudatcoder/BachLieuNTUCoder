///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string s;
vector<string> ans;
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
while(cin>>s)
{
    ans.push_back(s);}
    for(int i=0;i<ans.size();i++)
        if(i==ans.size()-1) cout<<ans[i];
        else cout<<ans[i]<<" ";
}