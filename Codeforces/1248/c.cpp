#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
const double PI = acos(-1);
#define x first
#define y second
#define iter(c) c.begin(), c.end()
#define ms(a) memset(a, 0, sizeof(a))
#define mss(a) memset(a, -1, sizeof(a))
#define mp(e, f) make_pair(e, f)

int main() {
    // cin.tie(0), ios::sync_with_stdio(0);
    int n;
    int dp[n][2][2];
    ms(dp);
    dp[0][0][0] = 1;
    dp[0][1][0] = 1;

    for (int i = 1; i < n; i++) {
        dp[i][0][0] = dp[i - 1][1][0] + dp[i - 1][1][1];
        dp[i][1][0] = dp[i - 1][0][0] + dp[i - 1][0][1];
        dp[i][0][1] = dp[i - 1][0][0];
        dp[i][1][1] = dp[i - 1][1][0];
    }

    return 0;
}