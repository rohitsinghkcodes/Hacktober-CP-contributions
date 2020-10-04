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
    /*
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            c++;
        }
        else
        {
            cout << arr[i] << " ";
        }
    }

    while (c--)
    {
        cout << 0 << " ";
    }
    */

    int next = 0;
    for (int x : arr)
    {

        if (x != 0)
        {
            arr[next] = x;
            next++;
        }
    }

    for (int i = next; i < n; i++)
    {
        arr[i] = 0;
    }

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}

/*
5
0 1 0 3 12
*/