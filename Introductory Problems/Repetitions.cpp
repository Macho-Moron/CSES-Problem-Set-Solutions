#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define pb push_back
#define REP(i, a, b) for (int i = a; i < b; i++)
 
void solve()
{
    string s;
    cin >> s;
    int cnt = 0, m = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
        }
        else
        {
            m = max(cnt, m);
            cnt = 0;
        }
    }
    cout << m+1;
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
