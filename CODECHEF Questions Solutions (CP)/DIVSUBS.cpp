/* Ques Link : https://www.codechef.com/problems/DIVSUBS
   Solution by: shubhankar249
*/

#include <bits/stdc++.h>
#define testCase int t; cin>>t; while(t--)
#define ll long long
#define mod 1000000000
#define Endl endl


using namespace std;



int main() {
    testCase {
        int n, x;
        cin>>n;
        int sum=0;
        bool flag= true;

        unordered_map<int, int> map;
        map[0]=0;
        int l=-1, r=-1;
        for (int i = 1; i <=n ; ++i) {
            cin>>x;
            if (flag) {
                sum += x;
                sum %= n;
                if (map.count(sum)) {
                    l = map[sum];
                    r = i;
                    flag = false;
                } else
                    map[sum] = i;
            }
        }

        cout<<r-l<<"\n";
        for (int j = l+1; j <=r; ++j) {
            cout<<j<<" ";
        }cout<<endl;
    }

    return 0;
}
