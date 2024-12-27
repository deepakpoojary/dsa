class Solution {
public:
    int getSum(int a, int b) {
       int c; 
      while(b !=0 ) {
        c = (a&b);
        a = a ^ b;
        b =(unsigned int)(c)<<1;
      }
      return a;
    
    }
};
// basically when we dont have to deal with carry like 1+2
// then we will do xor directly 
// in 3+2 we need to use and