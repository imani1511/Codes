class Solution {
public:
    int firstOcc(vector<int>& nums,int size,int key)
    {
        int s = 0;
        int e = size-1;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e)
        {
            if(nums[mid]== key){
                ans= mid;
                e= mid-1;
            }
            else if(nums[mid]<key){
                s= mid+1;
            }else
                e = mid -1;
            mid = s+(e-s)/2;
        }
        return ans;
    }
    
    int lastOcc(vector<int>& nums,int size,int key)
    {
        int s = 0;
        int e = size-1;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e)
        {
            if(nums[mid]== key){
                ans= mid;
                s= mid+1;
            }
            else if(nums[mid]<key){
                s= mid+1;
            }else
                e = mid -1;
            mid = s+(e-s)/2;
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
       
        int n = nums.size();
       
        return {firstOcc(nums,n,target),lastOcc(nums,n,target)};
    }
};