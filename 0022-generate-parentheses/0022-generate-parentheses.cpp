class Solution {
public:
void solve (vector<string>&ans,string tmp,int s,int e,int n){
    if(s==n&e==n){
        ans.push_back(tmp);
        return;
    }
    if(s<n){
        solve(ans,tmp+'(',s+1,e,n);
    }
    if(e<s){
        solve(ans,tmp+')',s,e+1,n);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(ans,"",0,0,n);
        return ans;
    }
};

//u can only push ) when e<s