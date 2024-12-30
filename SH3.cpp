/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
bool ktnt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int tcs(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += (n % 10)*(n%10);
        n /= 10;
    }
    return s;
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
    int a = 2;
    while (n > 0)
    {
        if (ktnt(tcs(a)))
        {
            n--;
        }
        a++;
    }
cout<<a-1;
}