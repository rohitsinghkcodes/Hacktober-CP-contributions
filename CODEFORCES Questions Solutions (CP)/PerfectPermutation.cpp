#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, i;
    cin >> num;
    if (num % 2 != 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                cout << i + 1 << " ";
            }
            else
            {
                cout << i - 1 << " ";
            }
        }
        cout << endl;
    }
}