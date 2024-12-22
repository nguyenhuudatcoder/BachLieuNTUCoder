#include<bits/stdc++.h>
#define int long long
using namespace std;
bool snt[5000005];
void check()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2; i<=sqrt(5*1e6); i++)
        for(int j=i*i; j<=1e6*5; j+=i)
            snt[j]=1;
}
string s;
int ans1,ans2;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    check();
    for(int i=0;i<s.size();i++){
        if(s[i]<='9'){
            int t=0;
            while(s[i]<='9'&&i<s.size()){
                t=t*10+s[i]-48;
                i++;
                ans1++;
            }
            if(snt[t]==0)
                ans2=max(ans2,t);
        }
    }
    cout<<ans1<<"\n"<<ans2;
}
