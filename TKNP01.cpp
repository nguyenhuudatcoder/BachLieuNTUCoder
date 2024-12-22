///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long x,a[100005];
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
    bool ans=binary_search(a,a+n,x);
    if(ans)
    cout<<'Y';
    else cout<<'N';
}