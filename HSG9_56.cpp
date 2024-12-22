///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n;
int ans;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
        {
            ans++;
            while(n%i==0)
                n/=i;
        }
    if(n>2) ans++;
    cout<<ans;
}