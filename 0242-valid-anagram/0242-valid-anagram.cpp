class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return 0;
        unordered_map <char, int> mp1,mp2;
        for(int i =0;i<t.size();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
            
        }
                for(int i =0;i<t.size();i++){
                    if(mp1[s[i]]!=mp2[s[i]]) return 0;}
        return 1;

        
    }
};