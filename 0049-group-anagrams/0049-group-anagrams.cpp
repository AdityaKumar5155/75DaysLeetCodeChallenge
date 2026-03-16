class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (string a: strs){
            string key = a;
            sort(key.begin(), key.end());
            m[key].push_back(a);
        }
        vector<vector<string>> ans;
        for (auto a: m){
            ans.push_back(a.second);
        }
        return ans;
    }
};