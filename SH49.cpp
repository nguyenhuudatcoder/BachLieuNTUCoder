///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long long n;
int tcs(long long i)
{
    int s=0;
    while(i>0)
    {
        s+=i%10;
        i/=10;
    }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    long long m=sqrt(n);
    for(long long i=m-81;i<=m;i++)
    {
        if(i*(i+tcs(i))==n)
        {
            cout<<i;
            exit(0);
        }
    }
    cout<<-1;
}