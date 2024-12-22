/// Discipline > Motivation
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
void ChatGPT()
{
    ll Number = 1;
    ll nextNum = 0;
    while (1)
    {
        // cout << nextNum << " ";
        nextNum = (nextNum / Number) * Number;
        // nextNum-=Number;
        for (int i = 1; i <= Number; i++)
        {
            nextNum += Number;
            n--;
            if (n == 0)
            {
                cout << nextNum;
                exit(0);
            }
        }
        // cout<<nextNum<<"\n";
        Number++;
    }
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ChatGPT();
}