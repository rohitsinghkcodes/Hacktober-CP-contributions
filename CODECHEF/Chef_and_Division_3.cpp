#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long


int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    
    {
        LL n,k,d,sum=0;
        cin>>n>>k>>d;
        vector<LL> v(n);
        for(LL &it:v) cin>>it;
        for(LL &it:v)
        {
            sum+=it;
        }
        if(k==0 or (ceil(sum/k)>=d))
        {
            cout<<d<<endl;
        }
        else
        {
            cout<<ceil(sum/k)<<endl;
        }
        
    }
    return 0;
}