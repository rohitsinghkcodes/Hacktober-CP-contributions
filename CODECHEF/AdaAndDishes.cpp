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
        int n,sum=0;
        cin>>n;
        vector<int> v(n);
        for(int &it:v) cin>>it;
        int sumTotal = accumulate(v.begin(),v.end(),0);
        cout<<sumTotal<<endl;
    }
    
    return 0;
}