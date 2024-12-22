///Kiên is unreliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long s[100005];
void make_sum()
{
    for(long long i=1;i<=1e5;i++)
        s[i]=s[i-1]+i*i;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_sum();
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<s[n]<<"\n";
    }
}