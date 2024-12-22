///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,t;
long long a[100005],x;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cin>>t;
    while(t--)
    {
        cin>>x;
        bool ans=binary_search(a,a+n,x);
        if(ans)
            cout<<"Y\n";
        else cout<<"N\n";
    }
}