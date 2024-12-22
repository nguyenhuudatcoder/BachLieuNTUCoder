///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,m;
int gold[100005],silver[100005],bronze[100005];
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
    cin>>n>>m;
    int l,r,x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        gold[i]=gold[i-1];
        silver[i]=silver[i-1];
        bronze[i]=bronze[i-1];
        if(x==1) gold[i]++;
        else if(x==2) silver[i]++;
        else bronze[i]++;
    }
    while(m--)
    {
        cin>>l>>r;
        cout<<gold[r-1]-gold[l-2]<<" "<<silver[r-1]-silver[l-2]<<" "<<bronze[r-1]-bronze[l-2]<<"\n";
    }
}