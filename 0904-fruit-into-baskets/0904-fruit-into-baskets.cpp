class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        map<int,int> baskets;
        int left=0, right=0;
        int n= fruits.size();
        while(right<n){
            baskets[fruits[right]]++;
            if(baskets.size()<=2){
                ans=max(ans,right-left+1);
            }else{
                baskets[fruits[left]]--;
                if(baskets[fruits[left]]==0)
                    baskets.erase(fruits[left]);
                left++;
            }
            right++;
        }
        return ans;
    }
};