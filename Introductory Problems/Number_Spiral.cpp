#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define pb push_back
#define REP(i, a, b) for (int i = a; i < b; i++)
 
void solve()
{
    ll x, y;
    cin >> y >> x;
    if (x > y)
    {
        if (x % 2 == 1)
        {
            cout << x * x- y + 1;
        }
        else
        {
            cout << (x - 1) * (x - 1) + y;
        }
    }
    if (y > x)
    {
        if (y % 2 == 0)
        {
            cout << y * y - x + 1;
        }
        else
        {
            cout << (y - 1) * (y - 1) + x;
        }
    }
    if (x == y)
    {
        cout << (x - 1) * (x - 1) + x;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
        cout << "\n";
    }
    return 0;
}