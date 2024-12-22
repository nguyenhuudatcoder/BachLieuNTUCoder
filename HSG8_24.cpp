///Discipline > Motivation
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll a,b,c,d;
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
    cin>>a>>b>>c>>d;
    if(a<b) swap(a,b);
    if(a<c) swap(a,c);
    if(a<d) swap(a,d);
    if(b<c) swap(b,c);
    if(b<d) swap(b,d);
    cout<<min({a,b,c,d})*min(a,b);
}