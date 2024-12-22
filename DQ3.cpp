///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
short n;
short kq[25];
void in()
{
    for(int i=0;i<n;i++)
        cout<<kq[i];
    cout<<"\n";
}
void check(int pos)
{
    if(pos==n)
        in();
    else
    {
        for(int i=0;i<=2;i++)
        {
            kq[pos]=i;
            check(pos+1);
        }
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    check(0);
}