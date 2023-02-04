bool isPermutate(string s1, string s2)
{
    unordered_map<char,int> m;
    for(int i=0;i<s1.size();i++){
          m[s1[i]]++;
        m[s2[i]]--;
    }
    for(auto &it: m){
        if(it.second != 0) return false;
    }
    return true;
}
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n= s2.size(),m= s1.size();
        for(int i=0;i <= n-m;i++){
            string temp = s2.substr(i,m);
            if(isPermutate(s1,temp)){
                return true;
            }
        }
        return false;
    }
};