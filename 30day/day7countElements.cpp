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

    set<int> s;
    int c = 0;
    for (int x : arr)
        s.insert(x);

    for (int x : arr)
        if (s.count(x + 1) == 1)
        {
            c++;
        }

    // sort(arr.begin(), arr.end());

    // for(int x:arr)
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (arr[i] == arr[i + 1])
    //     {
    //         if (arr[i + 2] == arr[i] + 1)
    //         {
    //             c++;
    //         }
    //     }

    //     if (arr[i + 1] == arr[i] + 1)
    //     {
    //         c++;
    //     }
    // }

    cout << c << endl;

    return 0;
}