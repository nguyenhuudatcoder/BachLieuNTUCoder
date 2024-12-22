/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
string s;
int ans = 1;
void check1(int i)
{
    int m = 0;
    while (i - m - 1 >= 0&&i+m+1<s.size() &&s[i-m-1]==s[i+m+1])
    {
        m++;
    }
    ans=max(ans,m*2+1);
}
void check2(int i)
{
    int m=0;
    while(i-m-1>=0&&i+m+2<s.size()&&s[i-m-1]==s[i+m+2])
        m++;
    ans=max(ans,m*2+2);
}
void check3(int i)
{
    int m=0;
    while(i-m-2>=0&&i+m+1<s.size()&&s[i-m-2]==s[i+m+1])
        m++;
    ans=max(ans,m*2+2);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        check1(i);
        if(s[i]==s[i+1])
        {
            check2(i);
        }
        if(s[i]==s[i-1])
            check3(i);
    }
    cout<<ans;
}