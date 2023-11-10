class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m =nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        vector<int> ans;
        int vis = -1;
        int i=0,j=0;
       while(i<n && j<m){
           if(nums1[i] == nums2[j]){
               if(vis != nums1[i]){
                   ans.push_back(nums1[i]);
                   vis= nums1[i];
               }
               i++;
               j++;
           }else if(nums1[i] > nums2[j]){
               j++;
           }else
               i++;
       }
        return ans;
    }
};