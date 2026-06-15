class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            int tmp=target-nums[i];
            if(mp.find(tmp)!=mp.end()){
                v.push_back(mp[tmp]);
                v.push_back(i);
                break;
            }
            mp[nums[i]]=i;
        }
        return v;
    }
};
