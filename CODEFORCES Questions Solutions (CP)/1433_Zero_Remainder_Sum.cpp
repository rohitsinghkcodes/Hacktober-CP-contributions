#include <bits/stdc++.h>
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define inlld(x) scanf("%lld", &x)
#define ind(x) scanf("%d", &x)
#define inlld2(x, y) scanf("%lld%lld", &x, &y)
#define inlld3(x, y, z) scanf("%lld%lld%lld", &x, &y, &z)
#define ind2(x, y) scanf("%d%d", &x, &y)
#define ind3(x, y, z) scanf("%d%d%d", &x, &y, &z)
#define all(x) (x.begin(), x.end())

const int N = 1e5 + 5;
const int MOD = 1e9 + 7;

typedef long long ll;
typedef long double ld;

using namespace std;

int n, m, k, arr[72][72];
int dp[72][72][36][72];

int main()
{
    ind3(n, m, k);
    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= m; b++)
            ind(arr[a][b]);
    for (int b = 1; b <= m; b++)
        for (int c = 0; c <= m / 2; c++)
        {
            dp[n + 1][b][c][0] = 0;
            for (int d = 1; d < k; d++)
                dp[n + 1][b][c][d] = -1e9;
        }
    for (int a = n; a >= 1; a--)
        for (int b = m + 1; b >= 1; b--)
            for (int c = m / 2; c >= 0; c--)
                for (int d = 0; d < k; d++)
                {
                    if (c == m / 2)
                        dp[a][b][c][d] = dp[a + 1][1][0][d];
                    else if (b == m + 1)
                        dp[a][b][c][d] = dp[a + 1][1][0][d];
                    else
                        dp[a][b][c][d] = max(dp[a][b + 1][c][d], dp[a][b + 1][c + 1][(d + arr[a][b]) % k] + arr[a][b]);
                }
    printf("%d\n", dp[1][1][0][0]);
    return 0;
}