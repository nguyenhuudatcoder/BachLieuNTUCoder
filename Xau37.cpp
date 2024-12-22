/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n;
string s;
int x, y;
// short pos[4]={0,1,2,3}
int ax=1,ay=1;
short vt;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if(vt==0)
        {
            if(s[i]=='G')
                y++;
            if(s[i]=='B')
            {
                y--;
                vt=2;
            }
            if(s[i]=='L')
            {
                x--;
                vt=1;
            }
            if(s[i]=='R')
            {
                x++;
                vt=3;
            }
        }
        else if(vt==1)
        {
            if(s[i]=='G')
                x--;
            if(s[i]=='B')
            {
                x++;
                vt=3;
            }
            if(s[i]=='L')
            {
                y--;
                vt=2;
            }
            if(s[i]=='R')
            {
                y++;
                vt=0;
            }
        }
        else if(vt==2)
        {
            if(s[i]=='G')
                y--;
            if(s[i]=='B')
            {
                y++;
                vt=0;
            }
            if(s[i]=='L')
            {
                x++;
                vt=3;
            }
            if(s[i]=='R')
            {
                x--;
                vt=1;
            }
        }
        else if(vt==3)
        {
            if(s[i]=='G')
                x++;
            if(s[i]=='B')
            {
                x--;
                vt=1;
            }
            if(s[i]=='L')
            {
                y++;
                vt=0;
            }
            if(s[i]=='R')
            {
                y--;
                vt=2;
            }
        }
    }
    cout << x << " " << y;
}