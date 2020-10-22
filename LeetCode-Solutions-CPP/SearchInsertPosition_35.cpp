class Solution {
public:
    int bs(int low, int high, vector <int> &arr, int x)
    {
        int mid=low+ (high-low)/2;
        if(high>=low)
        {
            if(arr[mid]==x)
                return mid;
            else if(arr[mid]<x)
            {
                if(mid==(arr.size()-1))
                    return mid+1;
                else if(mid+1<=(arr.size()-1) && arr[mid+1]>x)
                    return mid+1;
                else
                    return bs(mid+1, high, arr, x);
            }
            else{
                //arr[mid]>x
                if(mid==0)
                    return 0;   
                else if((mid-1)>=0 && arr[mid-1]<x)
                    return mid; 
                else
                    return bs(low, mid-1, arr,x);
            }
            
        }
        else{
            return -1;
        }
    }
    int searchInsert(vector<int>& nums, int target) {
        return bs(0, nums.size()-1, nums, target);
    }
};