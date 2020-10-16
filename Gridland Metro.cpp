#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,m,k; 
    scanf("%d %d %d",&n,&m,&k);
    map<int,vector<pair<int,int> > > mp;
    for (int i=0; i<k; i++)
    {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        mp[a].push_back(make_pair(b,c));
    }
    long long sum_occupied = 0;
    for (map<int,vector<pair<int,int> > > :: iterator j = mp.begin(); j!=mp.end(); j++)
    {
        vector<pair<int,int> > v = j->second;
        sort(v.begin(), v.end());
        v.push_back(make_pair(2000000001,2000000001));
        int l=0, r=-1;
        for (int i=0; i<v.size(); i++)
        {
            if (v[i].first > r)
            {
                sum_occupied += (r-l+1);
                l = v[i].first;
                r = v[i].second;
            }
            else
                r = max(r, v[i].second);
        }
    }
    printf("%lld\n", (long long)n * m - sum_occupied);
}
