///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
int d[1000005];
int x;
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
cin>>n;while(n--){cin>>x;d[x]++;}
int a=0;
for(int i=0;i<=1e6;i++)
    if(d[i]>=a){a=d[i];x=i;}cout<<x;
}