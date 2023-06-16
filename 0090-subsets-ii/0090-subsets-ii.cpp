class Solution {
public:
    void rec(vector<int> &ds, vector<int> nums, int N, int ind,set<vector<int>> &ans){
        if(ind == N){
            ans.insert(ds);
            return;
        }
        rec(ds,nums,N,ind+1,ans);
        
        ds.push_back(nums[ind]);
        rec(ds,nums,N,ind+1,ans);
        ds.pop_back();
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<vector<int>>ans1;
        vector<int> ds;
        int N = nums.size();
        sort(nums.begin(),nums.end());
        rec(ds,nums,N,0,ans);
        for (auto a: ans) {
            ans1.push_back(a);
        }
        return ans1;
    }
};