class StockSpanner {
public:
   vector<int>v;
    StockSpanner() {
        
    }
    int next(int price) {//each time it should input 
        v.push_back(price);
        int n=v.size();
        int count=1;
        if(n>1)
        {
            for(int i=n-2;i>=0;i--)
            {
                if(price>=v[i])
                    count++;
                else
                    break;
            }
        }
        return count;
    }
};
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */