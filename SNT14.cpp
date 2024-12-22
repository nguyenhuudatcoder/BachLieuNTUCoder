/// A game will be our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int snt[1000005];
void make_sieve()
{
    for (int i = 2; i <= 1e6; i++)
        if (snt[i] == 0)
            for (int j = i; j <= 1e6; j += i)
                snt[j] = i;
}
int t, n;
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
    make_sieve();
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << snt[n] << "\n";
    }
}