class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int tot=r*c;
        int count=0;
        
        int sR=0;//starting row 
        int eR=r-1;//ending row see the eg:1
        int sC=0;// 
        int eC=c-1;//
        vector <int> ans;//
        
        while(count<tot){// SS EE
            //printing starting row 
            for(int index=sC;count< tot &&index<=eC;index++){
                ans.push_back(matrix[sR][index]);//what are we printing
                count++;
            }sR++;
            
            //printing ending col
            
            for(int index=sR;count< tot &&index<=eR;index++){
                ans.push_back(matrix[index][eC]);//what are we printing aka EC 
                count++;
            }eC--;
            //printing last row in rev
            for(int index=eC;count< tot &&index>=sC;index--){
                ans.push_back(matrix[eR][index]);
                count++;
            }eR--;
            //in detail we are printing each col no 
            //printing first col in rev 
            for(int index=eR;count< tot &&index>=sR;index--){
                ans.push_back(matrix[index][sC]);
                count++;
            }sC++;
            
            
            
            
        }
        return ans;
    }
};