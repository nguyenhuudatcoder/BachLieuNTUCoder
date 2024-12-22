///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,x;
vector<int> ans;
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
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0)
            res.push_back(x);
        else
        {
            if(res.size()>ans.size())
            {
                ans.clear();
                for(auto a:res)
                    ans.push_back(a);
            }
            res.clear();
        }
    }
    cout<<ans.size()<<"\n";
    for(auto i:ans) cout<<i<<" ";
}