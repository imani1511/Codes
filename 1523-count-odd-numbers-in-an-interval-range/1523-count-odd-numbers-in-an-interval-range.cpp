class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
       
        
        if(low % 2 == 0){
            low++;
            
        }
         if(low > high){
            return 0;
        }else
            count = ((high - low)/2)+1;
        
            return count;
    }
    
};