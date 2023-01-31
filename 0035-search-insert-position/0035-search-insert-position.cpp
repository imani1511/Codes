class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator it;
        int ans=0;
        it= find(nums.begin(),nums.end(),target);
        if(it != nums.end()){
         ans= it-nums.begin();
        }else{
            int i=0;
            while(target>nums[i])
            {
                i++;
                if(i==nums.size())
                    return i;
            }
            return i;
        }
        return ans;
    }
};