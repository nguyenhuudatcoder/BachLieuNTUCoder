/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int primedivisor[1000005];
bool big[1000005];
int t, a, b;
bool snt[1000005];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=1e3;i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e6;j+=i)
                snt[j]=1;
}
void make_prime_divisor()
{
    for (int i = 2; i <= 1e6; i++)
    {
        if (snt[i]==0)
        {
            long long m = 1ll*i;
            int hat = 1;
            while (m <= 1e6)
            {
                if (snt[hat+1]==0)
                    big[m] = 1;
                m = m * 1ll*i;
                hat++;
            }
        }
    }
    for (int i = 1; i <= 1e6; i++)
    {
        primedivisor[i] = primedivisor[i - 1];
        primedivisor[i] += big[i];
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
    make_sieve();
    make_prime_divisor();
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << primedivisor[b] - primedivisor[a - 1] << "\n";
    }
}