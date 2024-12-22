/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n;
long long s;
long a[205];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if((s-a[i])==a[i])
        {
            cout<<a[i];
            exit(0);
        }
    cout<<"N";
}