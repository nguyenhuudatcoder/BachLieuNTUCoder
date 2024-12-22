///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[1005],ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=i-1;j>=0;j--)
            if(__gcd(a[i],a[j])>1)
                ans++;
    }
    cout<<ans;
}
