///Discipline > Motivation
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll a,b;
vector<ll> prime;
void check(ll a,ll b)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            prime.push_back(i);
            while(a%i==0)
                a/=i;
        }
    }
    if(a>1) prime.push_back(a);
    for(auto i:prime)
    {
        if(b%i!=0)
        {
            cout<<"No\n";
            return;
        }
        while(b%i==0)
            b/=i;
    }
    if(b>1)
    {
        cout<<"No\n";
        return;
    }
    cout<<"Yes\n";
    prime.clear();
}
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
    while(cin>>a>>b)
    {
        check(a,b);
    }
}