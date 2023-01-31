class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left =0;
        int right =nums.size()-1;
       
        while(right>=left)
        {
            int mid= left +(right-left)/2;
          if(nums[mid] == target){
               return mid;
          }
        if(nums[left]<=nums[mid])
            {
             if(target>=nums[left] and target<=nums[mid]){
                 right=mid;
             }else{
                 left =mid+1;
             }
         }
        else if(nums[mid]<nums[left]){
            if(target>=nums[mid] and target <= nums[right]){
                left = mid+1;
            }else{
                right=mid;
            }
        }
           
        }
        return -1;
    }
};