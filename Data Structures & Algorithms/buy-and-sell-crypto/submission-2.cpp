class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0, min1 =1e5;
        for(int i=0; i<prices.size(); i++){
            min1=min(min1,prices[i]);
            int tmp=prices[i]-min1;
            if(tmp>res){
                res=tmp;
            }
        }
        return res;
   }
};
