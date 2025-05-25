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
    if(n == 1){
        cout<<1;
        return;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        for (int i = 1; i <= n / 2; i++)
        {
            cout << n / 2 + i << " " << i << " ";
        }
        if (n & 1)
        {
            cout << n;
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