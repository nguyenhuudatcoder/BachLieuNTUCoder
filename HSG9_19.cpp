///Kiên is unreliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(n>=8128) cout<<6+28+496+8128;
    else if(n>=496)
        cout<<6+28+496;
    else if(n>=28)
        cout<<34;
    else cout<<6;
}