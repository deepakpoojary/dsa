class Solution {
    private: //when gen problem use recur tree, using open and close as variables at each step
    void generate(int open,int close,int n,vector<string>&result,string str){
        if(open==n&& close ==n){
            result.push_back(str);
            return;
        }
        if(open<n){
            generate(open+1,close,n,result,str+'(');
        }
        if(open>close){
            generate(open,close+1,n,result,str+')');
        }
                     
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(0,0,n,result,"");
        return result;
    }
};