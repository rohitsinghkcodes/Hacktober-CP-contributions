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

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    // unordered_set<int> s;
    // for (int x : arr)
    //     s.insert(x);

    // for (auto x : s)
    //     cout << x << " ";
    // for (auto i = s.begin(); i != s.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    int a = 0;
    for (int x : arr)
        a ^= x;

    cout << a;
    return 0;
}