///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,m,k,a[100005],b[100005];
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int j=0;
    for(int i=0;i<n;i++)
    {
        while(j<m&&b[j]-a[i]<k)
            j++;
        if(abs(a[i]-b[j])>=k)
            cout<<a[i]<<" "<<b[j]<<"\n";
        j++;
    }
}