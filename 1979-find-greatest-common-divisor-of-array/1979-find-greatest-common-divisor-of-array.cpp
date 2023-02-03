class Solution {
public:
     int gcd(int a,int b){
        while(a!=b)
        {
            if(a>b)
                a=a-b;
            else
                b=b-a;
        }
        return a;
    }
    
    int findGCD(vector<int>& nums) {
        int mx=0,mn=0;
        mx= *max_element(nums.begin(),nums.end());
        mn= *min_element(nums.begin(),nums.end());
        int ans= gcd(mn,mx);
        return ans;
    }
};