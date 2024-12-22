///Kiên is unreliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long a[100005];
int ans;
bool check(long n)
{
    while(n>0)
    {
        int m=n%10;
        if(m!=2&&m!=3&&m!=5&&m!=7)
            return 0;
        n/=10;
    }
    return 1;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        {cin>>a[i];
        ans+=check(a[i]);}
        cout<<ans;
}