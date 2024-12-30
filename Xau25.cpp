/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string a, b;
int dem[30], dem1[30];
void ChatGPT()
{
    for (int i = 0; i < 30; i++)
        if (dem[i] != dem1[i])
        {
            cout << "different\n";
            return;
        }
    cout << "same\n";
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
    while (cin >> a >> b)
    {
        if (a == "END" && b == "END")
            exit(0);
        for (int i = 0; i < a.size(); i++)
            dem[a[i] - 97]++;
        for (int i = 0; i < b.size(); i++)
            dem1[b[i] - 97]++;
        ChatGPT();
        for (int i = 0; i < 30; i++)
        {
            dem[i] = 0;
            dem1[i] = 0;
        }
    }
}