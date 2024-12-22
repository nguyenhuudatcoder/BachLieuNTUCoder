///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string s;
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
        if(s[0]>='a') s[0]-=32;
        for(int i=1;i<s.size();i++)
            if(s[i]<'a')
                s[i]+=32;
        cout<<s<<" ";
    }
}