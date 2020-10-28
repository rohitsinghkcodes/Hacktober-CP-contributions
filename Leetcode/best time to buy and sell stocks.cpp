class Solution {
public:
    int maxProfit(vector<int>& p) {
        int s=p.size();
        //int dp[s];
        int m=0;
        int x=INT_MAX;
        for(int i=0;i<s;i++){
            if(p[i]<x){
                x=p[i];
            }
            else {
                m=max(m,p[i]-x);
            }
        }
        return m;
    }
};
