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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int &it : v)
            cin >> it;
        while (x--)
        {
            int a, b;
            cin >> a >> b;
            replace(v.begin(), v.end(), v.at(a - 1), b);
            cout << *max_element(v.begin(), v.end()) << endl;
        }
    }
    return 0;
}