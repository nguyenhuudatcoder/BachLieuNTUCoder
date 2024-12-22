///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long r,l;
int dem[9];
void cotmoc(long long n)
{
    while(n>0)
    {
        dem[n%10]++;
        n/=10;
    }
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
    cin>>l>>r;
    for(long long i=l;i<=r;i++)
    {
        cotmoc(i);
    }
    for(int i=0;i<10;i++)
        cout<<dem[i]<<"\n";
}