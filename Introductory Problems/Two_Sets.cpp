#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define pb push_back
#define REP(i, a, b) for (int i = a; i < b; i++)
 
void solve()
{
    int n;
    cin >> n;
    if ((n * (n + 1)) % 4 != 0)
    {
        cout << "NO";
        return;
    }
    cout << "YES"<< "\n";
    if (n % 4 == 0)
    {
        cout << n / 2 << "\n";
        for (int i = 1; i <= n; i += 4)
        {
            cout << i << " " << i + 3 << " ";
        }
        cout << "\n";
        cout << n / 2 << "\n";
        for (int i = 1; i <= n; i += 4)
        {
            cout << i + 1 << " " << i + 2 << " ";
        }
    }
    else
    {
        cout << n / 2 + 1 << "\n";
        cout << 1 << " " << 2 << " ";
        for (int i = 4; i <= n; i += 4)
        {
            cout << i << " " << i + 3 << " ";
        }
        cout << " \n";
        cout << n / 2 << "\n";
        cout << 3 << " ";
        for (int i = 4; i <= n; i += 4)
        {
            cout << i + 1 << " " << i + 2 << " ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
