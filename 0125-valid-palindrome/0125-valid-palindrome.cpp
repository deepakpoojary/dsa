class Solution {
public:
    bool is_valid(char ch){
    if((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9')||(ch>='A'&& ch<='Z'))
    {return 1;}
        return 0;
    }
    
    bool to_lower(char ch){
    if(ch>='A'&& ch<='Z')
    {return 1;
    }
    return 0;
    }  
    
    bool isPalindrome(string s) {
        //elligible candidate
        //converting to lower case
        string a="";
        
        for(int i=0;i<s.length();i++){
            if(is_valid(s[i])){
                if(to_lower(s[i])){
                    s[i]=s[i]+32;
                }
            a.push_back(s[i]);
               }}
    
        
        
        
        // check_palindrome
        int i=0;
        int j=a.length()-1;
        while(i<j){
            if(a[i]!=a[j]){
               return 0;
            }
            i++;
            j--;
            }
        return 1;
        
    }
};