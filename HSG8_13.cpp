/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
double a, b, c;
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
    cin >> a >> b >> c;
    if(c<a) swap(c,a);
    if(c<b) swap(c,b);
    cout << fixed << setprecision(2);
    if (a + b <= c || a + c <= b || b + c <= a||min({a,b,c})==0)
        cout << "NO";
    else
    {
        float p =1.0* (a + b + c)/2;
        if (a == b || b == c || a == c)
        {
            if (a == b && b == c)
                cout << "TAM GIAC DEU " << 1.0 * sqrt(p * (p - a) * (p - b) * (p - c));
            else
                cout << "TAM GIAC CAN";
        }
        else if (1.0*a * a + b * b > c * c)
            cout << "TAM GIAC NHON";
        else if (1.0*a * a + b * b < c * c)
            cout << "TAM GIAC TU";
        else
            cout << "TAM GIAC VUONG " << 1.0 * sqrt(p * (p - a) * (p - b) * (p - c));
    }
}