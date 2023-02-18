class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        cout<<sum<<endl;
        int t_sum=0;
        for(int i = 1; i<=n;i++){
            t_sum += i;
        }
        cout<<t_sum<<endl;
        if(t_sum != sum){
            return t_sum-sum;
        }else 
            return 0;
    }
};