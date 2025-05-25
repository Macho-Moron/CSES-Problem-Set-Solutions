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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            continue;
        }
        sum += (a[i] - a[i + 1] );
        a[i + 1] = a[i] ;
    }
    cout<< sum;
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
