class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int maxlen=0;
        int changes;
        for(int i =0;i<n;i++){
            int hash1[26]={0};//stores 2 elements as onlyA and B are there 
            int maxf=0;
            for(int j=i;j<n;j++){
                hash1[s[j]-'A']++;//storing count of alphabets in normal array 
                // cout<<s[j]-'A';
                maxf= max(maxf,hash1[s[j]-'A']);//length -maxf is what we ultimately need 
                 changes = (j-i+1)-maxf;//length -maxf 
                if(changes<=k){
                    maxlen=max(maxlen,j-i+1);//only then this is counted
                }
                else 
                    break;
            }
        }
        return maxlen;
    }
};