/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define kien main
#define mod 1000000007
using namespace std;
string ingredient;
// int p[3];
int money, ans;
int breadinstorage, cheeseinstorage, sausageinstorage;
int breadprice, cheeseprice, sausageprice;
int breadreq, cheesereq, sausagereq;
void make_hamburger()
{
    int l = 0, r = 1000000000000000;
    while (l <= r)
    {
        // int breadbill = 0, cheesebill = 0, sausagebill = 0;
        int m = (l + r) / 2; /// m là số bánh có thể làm được
        int breadbill = max(0LL, (m * breadreq - breadinstorage) * breadprice);
        int cheesebill = max(0LL, (m * cheesereq - cheeseinstorage) * cheeseprice);
        int sausagebill = max(0LL, (m * sausagereq - sausageinstorage) * sausageprice);
        if (breadbill + cheesebill + sausagebill > money)
            r = m - 1;
        else
        {
            l = m + 1;
            ans = m;
        }
    }
    cout << ans;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> ingredient;
    cin >> breadinstorage >> sausageinstorage >> cheeseinstorage;
    cin >> breadprice >> sausageprice >> cheeseprice >> money;
    for (int i = 0; i < ingredient.size(); i++)
        if (ingredient[i] == 'B')
            breadreq++;
        else if (ingredient[i] == 'C')
            cheesereq++;
        else
            sausagereq++;
    make_hamburger();
}