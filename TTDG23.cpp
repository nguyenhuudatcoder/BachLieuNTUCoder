#include<bits/stdc++.h>
#define int long long
using namespace std;

    int n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int m=sqrt(n);
    if(m*m==n) cout<<n;
    else{
        int a=pow(m+1,2);
        int b=pow(m,2);
        if(n-b>=a-n) cout<<a;
        else if(n-b<a-n) cout<<b;
    }

}
