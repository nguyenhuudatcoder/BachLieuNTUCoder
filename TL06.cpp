///Discipline > Motivation
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n;
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
    if(n==0) cout<<10;
    else if(n<10) cout<<n;
    else
    {
        string ans;
        for(int i=9;i>=2;i--)
        {
            while(n%i==0)
            {
                ans=char(i+48)+ans;
                n/=i;
            }
        }
        if(ans.empty()==1||n>9) cout<<-1;
        else cout<<ans;
    }
}