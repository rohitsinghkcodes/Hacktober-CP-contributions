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
    char arr[17] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k=0,p=0;
        vector<string> v;
        cin>>n;
        string str;
        cin>>str;
        while(str.length()!=0)
        {
            string s =  str.substr(0,4);
            v.push_back(s);
            str.erase(0,4);
        }

        for(string &it:v) cout<<arr[stoi(it,0,2)];
        cout<<endl;
    }
    return 0;
}