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
    for(ll i=2;i<=sqrt(n);i++)
        while(n%i==0)
        {
            if(n/i==1)
            {
                cout<<i;
                exit(0);
            }
            cout<<i<<'.';
            n/=i;
        }
    if(n>1) cout<<n;
}