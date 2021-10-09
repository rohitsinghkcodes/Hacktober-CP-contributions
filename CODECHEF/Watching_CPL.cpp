#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        //k:target  n:no of boxex
        vector<int> v(n);
        for(int &it:v) cin>>it;
        vector<int> v1,v2;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int s = v.size();
        int v1sum= 0,v2sum = 0,c = 0;
        for(int i=0; i<s; i++)
        {
            if(v1sum<k)
            {
                v1sum+=v[i];
                c++;
                i++;
            }
            if(v2sum<k)
            {
                v2sum+=v[i];
                c++;
            }
            if(v1sum>=k and v2sum>=k)
            {
                break;
            }
        }
        
        cout<<c<<endl;
    }
    return 0;
}