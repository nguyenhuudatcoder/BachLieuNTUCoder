///Kiên is unreliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int t;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    if(t==86400) 
        {cout<<"0 0 0";
        exit(0);}
    int h=t/3600;
    t-=h*3600;
    int m=t/60;
    t-=m*60;
    cout<<h<<" "<<m<<" "<<t;
}