class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;//change only these 2
        
        for (int bill:bills ){
            if(bill==5){
                five++;
            }
            else if(bill==10){
                if(five==0){
                    return 0;
                }
                five--;
                ten++;
                
            }
            else { // the main crux is choosing 10 5 over three 5's  
                 if(five >0 && ten >0){ // 5555 10 20 10 
                    five-=1;
                    ten-=1;
                }
                else if(five>=3){
                    five-=3;
                }
                
                else {return 0;}
                
            }
        }
        return 1;
        

    
}};