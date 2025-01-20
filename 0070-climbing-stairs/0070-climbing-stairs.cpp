class Solution {
public:
    int climbStairs(int n) {
        if(n<=0)return 0;
        if(n==1)return 1;
        if(n==2)return 2;
        int a=1,b=2,total=0;
        for(int i =2;i<n;i++){
            total=a+b;
            a=b;
            b=total;

        }
        return total;
        //summing any 2 consecutive steps gives the ans for next step


        
    }
};