#include<bits/stdc++.h>
using namespace std;
int n,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=sqrt(n/3); i++){
        int a=i*i;
        for(int j=i; j<=sqrt(n/2); j++)
        {
            int b=j*j;
            int c=n-a-b;
            int m=sqrt(c);
            if(m*m==c&&c>=b){
                ans++;
            }
        }
    }
    cout<<ans;
}
