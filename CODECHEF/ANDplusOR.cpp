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
        LL x, a = 0, b = 0;
        cin >> x;
        for (LL i = 0; i < ceil(float(x)/2); i++)
        {
            if ((i & (x - i)) + (i | (x - i)) == x)
            {
                a = i;
                b = x - i;
            }
        }
        if (a == 0 and b == 0)
        {
            cout << -1 << endl;
        }
        else
        {

            cout << a << " " << b << endl;
        }
    }
    return 0;
}