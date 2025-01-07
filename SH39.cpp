/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
vector<int> supprime = {2, 3, 5, 7};
int b[4] = {1, 3, 7, 9};
int l, r;
#define ErasLimit 10000005
bool snt[ErasLimit];
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(ErasLimit); i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= ErasLimit; j += i)
                snt[j] = 1;
}
int a;
bool prime[10000005];
void make_prime(int c)
{
    for (int i = 0; i < 4; i++)
    {
        if (a * 10 + b[i] > 1e7)
            return;
        if (snt[a * 10 + b[i]] == 0)
        {
            a = a * 10 + b[i];
            prime[a]=1;
            make_prime(c+1);
            a /= 10;
        }
    }
}

bool save=1;
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
    cin >> l >> r;
    prime[3]=prime[2]=prime[5]=prime[7]=1;
    make_sieve();
    for (auto i : supprime)
    {a=i;
        make_prime(0);
    }
    sort(supprime.begin(), supprime.end());
    // for (auto i : supprime)
    //     cout << i << "\n";
    for(int i=l;i<=r;i++)
        if(prime[i])
        {
            save=0;
            cout<<i<<"\n";
        }
    if(save)cout<<"NO";
}