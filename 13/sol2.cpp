class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int mprice=prices[0];
        for(auto i=prices.begin()+1;i<prices.end();i++){
            if(*i-mprice>max){
                max=*i-mprice;
                 }
            else if(*i<mprice){
                mprice=*i;
            }
        }
        return max;
        
    }
};
