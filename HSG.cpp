///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long a[1000005];
long long s[1000005];
long long Max[1000005],Min[1000005];
long long ans=INT_MIN;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        s[i]=s[i-1]+a[i];
    for(int i=0;i<n;i++)
        Min[i]=min(Min[i-1],s[i]);
    Max[n-1]=s[n-1];
    for(int i=n-2;i>=0;i--)
        Max[i]=max(Max[i+1],s[i]);
    for(int i=0;i<n-1;i++)
        ans=max(ans,Max[i+1]-Min[i]);
    cout<<ans;
}