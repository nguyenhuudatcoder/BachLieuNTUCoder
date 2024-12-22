///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[1005],ans;
int demu(int n)
{
    int dem=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
            dem+=2;
        if(i*i==n)  dem--;
    }
    return dem;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=demu(a[i]);
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if((a[j]+a[i])%7==0) ans++;
    cout<<ans;
}
