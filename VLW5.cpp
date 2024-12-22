///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long long n;
int a,b;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>a>>b;
    int dem=0;
    while(n>0){
        dem++;
        n-=a;
        a+=b;
    }
    cout<<dem;
}
