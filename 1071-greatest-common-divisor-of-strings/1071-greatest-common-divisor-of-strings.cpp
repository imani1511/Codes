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
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1)
            return "";
        int l=gcd(str1.length(),str2.length());
        return str1.substr(0,l);
    }
};