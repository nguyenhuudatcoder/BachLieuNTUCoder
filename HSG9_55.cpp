///Kiên is unreliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
string s;

kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>s;
        int dem[250]={};
        for(int i=0;i<s.size();i++)
        {
            dem[s[i]]++;
        }
        for(int i=0;i<=249;i++)
            if(dem[i]==1)
            {
                cout<<char(i);
                break;
            }
    }
}