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

const int N = 205;
const int MOD = 1e9 + 7;

typedef long long ll;
typedef long double ld;

using namespace std;

ll R, G, B, r[N], g[N], b[N], dp[N][N][N];

ll solve(ll i, ll j, ll k)
{
    if (min(i, min(j, k)) < 0)
        return -1e18;
    int cnt = (i == 0) + (j == 0) + (k == 0);
    if (cnt >= 2)
        return 0;
    if (dp[i][j][k] != -1)
        return dp[i][j][k];
    return dp[i][j][k] = max(solve(i - 1, j - 1, k) + r[i] * g[j], max(solve(i - 1, j, k - 1) + r[i] * b[k], solve(i, j - 1, k - 1) + g[j] * b[k]));
}

int main()
{
    inlld3(R, G, B);
    for (ll a = 1; a <= R; a++)
        inlld(r[a]);
    for (ll a = 1; a <= G; a++)
        inlld(g[a]);
    for (ll a = 1; a <= B; a++)
        inlld(b[a]);
    sort(r + 1, r + R + 1);
    sort(b + 1, b + B + 1);
    sort(g + 1, g + G + 1);
    memset(dp, -1, sizeof(dp));
    printf("%lld\n", solve(R, G, B));
    return 0;
}