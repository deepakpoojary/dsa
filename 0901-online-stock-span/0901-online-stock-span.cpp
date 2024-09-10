class StockSpanner {
public:
    stack<pair<int, int>> s;
    StockSpanner() {//this will be called each time 
        

    }
        
    int next(int price) {
          int res = 1;
        while (!s.empty() && s.top().first <= price) {
            res += s.top().second;
            s.pop();
        }
        s.push({price, res});//store the cumilative ans 
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */