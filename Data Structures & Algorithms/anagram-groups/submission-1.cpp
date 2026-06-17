class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for(const auto &x:strs){
            string tmp=x;
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(x);
        }
        vector<vector<string>>v;
        for(const auto &x:mp){
            v.push_back(x.second);
        }
        return v;
    }
};
