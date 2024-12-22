///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string s;
bool save=1;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            save=0;
            while(s[i]>='0'&&s[i]<='9'&&i<s.size())
            {
                cout<<s[i];
                i++;
            }
            cout<<"\n";
        }
    }
    if(save) cout<<"No";
}