class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(const auto x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>tmp;
        for(const auto x:mp){
            tmp.push_back({x.first,x.second});
        }
        sort(tmp.begin(),tmp.end(),[](const auto &a,const auto &b){
            return a.second>b.second;
        });
        for(int i=0; i<k; i++){
            v.push_back(tmp[i].first);
        }
        return v;
    }
};
