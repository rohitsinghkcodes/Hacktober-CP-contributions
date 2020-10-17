#include <bits/stdc++.h>
using namespace std;
int n,m,A[1000010];
map<int,int> mp;
int main()
{
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>A[i];
    cin>>m;
    int tmp;
    while (m--)
    {
        cin>>tmp;
        mp[tmp]++;
    }
    for (int i=0;i<n;i++)
        mp[A[i]]--;
    for (map<int,int> :: iterator j = mp.begin();j!=mp.end();j++)
    {
        if (j->second > 0)
            cout << j->first << " ";
    }
    return 0;
}
