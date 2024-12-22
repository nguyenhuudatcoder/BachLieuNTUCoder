#include<bits/stdc++.h>
#define int long long
using namespace std;
string s1,s2;
int dem1[300],dem2[300],ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
        dem1[s1[i]]++;
    for(int i=0;i<s2.size();i++)
        dem2[s2[i]]++;
    for(int i='a';i<='z';i++){
        char a=i;
        if(dem1[a]==0||dem2[a]==0)
            ans+=max(dem1[a],dem2[a]);
    }
    cout<<ans;
}
