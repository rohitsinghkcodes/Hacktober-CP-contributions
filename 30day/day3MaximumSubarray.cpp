#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    int sum = 0;
    int maxi = arr[0];
    int initial = 0;
    int final = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxi = max(sum, maxi);
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << maxi;

    return 0;
}
/* 

kadanes algorithm.......
9
-2 1 -3 4 -1 2 1 -5 4
*/