#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
string ktnt(int n)
{
    while(n>0){
        if(n<2) return "NO";
        for(int i=2;i<=sqrt(n);i++)
            if(n%i==0) return "NO";
        n/=10;
    }
    return "YES";
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    cout<<ktnt(n);
}
