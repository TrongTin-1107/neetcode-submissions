class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0, min =1e5;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<min){
                min=prices[i];
            }
            int tmp=prices[i]-min;
            if(tmp>res){
                res=tmp;
            }
        }
        return res;
   }
};
