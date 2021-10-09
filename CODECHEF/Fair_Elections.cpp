#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <set>
#include <cmath>
#include <numeric>
#define LL long long
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, p = 0;
        cin >> n >> m;
        vector<int> v1(n), v2(m);
        for (int &it : v1)
            cin >> it;
        for (int &it : v2)
            cin >> it;
        //Calculation Part
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        reverse(v2.begin(), v2.end());
        while (accumulate(v1.begin(), v1.end(), 0) < accumulate(v2.begin(), v2.end(), 0))
        {
            if (p <= n and p<=m)
            {
                swap(v1[p], v2[p]);
                p++;
            }
            else
            {
                p=-1;
                break;
            }
        }

        cout << p << endl;
    }
    return 0;
}