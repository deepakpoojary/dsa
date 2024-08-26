class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> s1hash(26,0);
        vector <int> s2hash(26,0);
        int l1=s1.size();
        int l2=s2.size();
        if(l1>l2)return 0;
        int l=0,r=0;
        while(r<l1){
            s1hash[s1[r]-'a']++;
            s2hash[s2[r]-'a']++;
            r++;
        }
        r--;// why are we doing this
        while(r<l2){
            if(s1hash==s2hash)return 1;
            r++;
            if(r!=l2){
                s2hash[s2[r]-'a']++; //window increase
            }
            s2hash[s2[l]-'a']--; //window decrease
            l++;
        }
        return false;
        
        
    }
};