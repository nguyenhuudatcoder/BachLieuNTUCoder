///Discipline > Motivation
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int t,n,x;
int dem[2];
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
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            dem[x]++;
        }
        for(int i=0;i<=2;i++)
            for(int j=0;j<dem[i];j++)
                cout<<i<<" ";
        for(int i=0;i<=2;i++)
            dem[i]=0;
        cout<<"\n";
    }
}