#include<bits/stdc++.h>
using namespace std;
string k;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>k;
    string s=k;
    reverse(k.begin(),k.end());
    cout<<s+k;
}
