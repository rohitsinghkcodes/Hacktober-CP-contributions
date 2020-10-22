class Solution {
public:
    int bs(int low, int high, vector<int>& arr, int x)
    {
        int mid=(low)+ (high-low)/2;
        if(high>=low){
            if(arr[mid]==x)
                return mid;
            else if(arr[mid]>x)
                return bs(low, mid-1, arr, x);
            else
                return bs(mid+1,high, arr,x);       
        }
        else
            return -1;
        
    }
    int search(vector<int>& nums, int target) {
        
        return bs(0, nums.size()-1, nums, target);
        
    }
};