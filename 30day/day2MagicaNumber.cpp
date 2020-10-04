#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;

// 19 =>82=>68=>100=>1

int fun(int n)
{
    int s = 0;
    int sum = 0;
    while (n > 0)
    {
        s = n % 10;
        n = n / 10;
        sum += s * s;
    }
    return sum;
}

int main()
{

    int n;
    cin >> n;
    unordered_set<int> s;
    while (1)
    {
        n = fun(n);
        if (n == 1)
        {
            cout << 1;
            return 1;
        }
        if (s.count(n) == 1)
        {
            cout << 0;
            return 0;
        }

        s.insert(n);
    }

    return 0;
}

// here we just need to tell the number is binary or not......
// A num is magical number if the square of sum of its digits is equals to 1
// 19->82->68->100->1