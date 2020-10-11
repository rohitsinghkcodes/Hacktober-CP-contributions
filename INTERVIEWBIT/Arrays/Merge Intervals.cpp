
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int > > v;
        if(intervals.size()==0){
            return v;
        }
        else if(intervals.size()==1){
            v.push_back({intervals[0][0],intervals[0][1]});
            return v;
        }
        sort(intervals.begin(), intervals.end(), [](vector<int> &a,vector<int > &b) {
            return a[0] < b[0];
        });
        v.push_back(intervals[0]);
        
        int s=intervals.size();
        for(int i=1;i<s;i++){
            int x=v.back()[1];
            int y=intervals[i][0];
            if(y<=x ){
                v.back()[1]=max(x,intervals[i][1]);
                
            }
            else{
                v.push_back(intervals[i]);
                
            }
        }
        return v;
    }
};
