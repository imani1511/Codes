class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        reverse(num.begin(),num.end());
        int sum=0;
        for(int i=0;i<num.size();i++){
            num[i] += k;
            k= num[i]/10;
            num[i]= num[i]%10;
            
        }
        sum=sum+k;
        while(sum){
            num.push_back(sum%10);
            sum=sum/10;
        }
        reverse(num.begin(),num.end());
        return num;
    }
    
};