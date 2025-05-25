#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define pb push_back
#define REP(i, a, b) for (int i = a; i < b; i++)
 
void solve()
{
    ll n;
    cin >> n;
    vector<bool> a(n + 1, false);
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        a[x] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!a[i])
            cout << i;
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