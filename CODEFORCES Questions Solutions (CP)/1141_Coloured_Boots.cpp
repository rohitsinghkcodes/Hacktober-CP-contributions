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

const int N = 2e5 + 5;
const int MOD = 1e9 + 7;

typedef long long ll;
typedef long double ld;

using namespace std;

int n;
char str1[N], str2[N];
vector<int> lt[30], rt[30];
vector<pair<int, int>> ans;

int main()
{
    ind(n);
    scanf(" %s", str1);
    scanf(" %s", str2);
    for (int a = 0; a < n; a++)
    {
        if (str1[a] == '?')
            lt[26].pb(a);
        else
            lt[(int)(str1[a] - 'a')].pb(a);
        if (str2[a] == '?')
            rt[26].pb(a);
        else
            rt[(int)(str2[a] - 'a')].pb(a);
    }
    for (int a = 0; a < 26; a++)
    {
        while (lt[a].size() > 0 && rt[a].size() > 0)
        {
            ans.pb({lt[a][lt[a].size() - 1] + 1, rt[a][rt[a].size() - 1] + 1});
            lt[a].pop_back();
            rt[a].pop_back();
        }
    }
    int idx = 0;
    while (lt[26].size() > 0 && idx < 26)
    {
        while (lt[26].size() > 0 && rt[idx].size() > 0)
        {
            ans.pb({lt[26][lt[26].size() - 1] + 1, rt[idx][rt[idx].size() - 1] + 1});
            lt[26].pop_back();
            rt[idx].pop_back();
        }
        idx++;
    }

    idx = 0;
    while (rt[26].size() > 0 && idx < 26)
    {
        while (rt[26].size() > 0 && lt[idx].size() > 0)
        {
            ans.pb({lt[idx][lt[idx].size() - 1] + 1, rt[26][rt[26].size() - 1] + 1});
            lt[idx].pop_back();
            rt[26].pop_back();
        }
        idx++;
    }
    while (rt[26].size() > 0 && lt[26].size() > 0)
    {
        ans.pb({lt[26][lt[26].size() - 1] + 1, rt[26][rt[26].size() - 1] + 1});
        lt[26].pop_back();
        rt[26].pop_back();
    }
    printf("%d\n", (int)ans.size());
    for (auto v : ans)
        printf("%d %d\n", v.f, v.s);
    return 0;
}