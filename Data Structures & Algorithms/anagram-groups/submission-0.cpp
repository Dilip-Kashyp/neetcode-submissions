class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> hashmap;

        for (auto x : strs){
            string s = x;
            sort(s.begin(), s.end());
            hashmap[s].push_back(x);
        }

        vector<vector<string>> ans;
        for (auto y : hashmap){
            ans.push_back(y.second);
        }

        return ans;
    }
};
