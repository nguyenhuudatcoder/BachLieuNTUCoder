/// Discipline > Motivation
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int snt[10000005];
int a, b;
ll ans = 0;
void countPrimeDiv()
{
    for (int i = 2; i <= 1e7; i++)
        if (snt[i] == 0)
        {
            for (int j = i; j <= 1e7; j += i)
                snt[j]++;
        }
}
bool doixung(int n)
{
    int m = n;
    int s = 0;
    while (m > 0)
    {
        s = s * 10 + m % 10;
        m /= 10;
    }
    return s == n;
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
    cin >> a >> b;
    countPrimeDiv();
    for (int i = a; i <= b; i++)
        if (snt[i] >= 3 && doixung(i) == 1)
            ans += i;
    cout << ans;
}