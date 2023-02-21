class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        int mid= s+(e-s)/2;
        if(n==1)
            return nums[0];
        if(nums[0] != nums[1])
            return nums[0];
        if(nums[n-1] != nums[n-2])
            return nums[n-1];
        while(s<=e){
            if(nums[mid] > nums[mid-1] && nums[mid] < nums[mid+1]){
                return nums[mid];
            }
            if((nums[mid]==nums[mid-1] && mid%2==1 ) || nums[mid]==nums[mid+1] && mid%2==0){
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid= s+(e-s)/2;
        }
        return 0;
    }
};