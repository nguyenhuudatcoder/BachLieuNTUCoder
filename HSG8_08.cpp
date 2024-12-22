///Kiên is unreliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
char a;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=0;i<4;i++)
    {
        cin>>a;
        n+=a-48;
    }
    int m=sqrt(n);
    if(m*m==n)
        cout<<"YES";
    else cout<<"NO";
}