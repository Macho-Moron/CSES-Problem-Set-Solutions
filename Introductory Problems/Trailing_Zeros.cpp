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
    ll ans = 0;
    for (int i = 1; n >= pow(5, i); i++)
    {
 
        ans += n / pow(5, i);
    }
    cout << ans;
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