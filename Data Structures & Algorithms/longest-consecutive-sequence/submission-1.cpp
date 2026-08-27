class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> se(nums.begin(),nums.end());
        int res=0;
        for(auto x:se){
            if(se.find(x-1)==se.end()){
                int cnt=1,tmp=x;
                while(se.find(tmp+1)!=se.end()){
                    cnt++;tmp++;
                }
                res=max(res,cnt);
            }
        }
        return res;
    }
    
};
