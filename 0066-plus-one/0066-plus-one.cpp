class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s=digits.size();
        for(int i =s-1;i>=0;i--){
            if(digits[i]!=9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};//only for that one corner case the whole code is based on //it 