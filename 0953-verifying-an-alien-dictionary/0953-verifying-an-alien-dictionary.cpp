class Solution {
    
public:
    bool isSorted(string str1,string str2, string order)
    {
       for(int i=0; i < min(str1.length(),str2.length());i++)
       {
           if(order.find(str1[i])>order.find(str2[i]))
               return false;
           else
               if(order.find(str1[i])<order.find(str2[i]))
                   return true;
            else 
                 continue;
           
       }
       if(str2.length()<str1.length()) 
           return false;
        else
            return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i = 0 ; i<words.size()-1;i++){
            if(!isSorted(words[i],words[i+1],order))
            {
                return false;
            }
        }
        return true;
    }
};