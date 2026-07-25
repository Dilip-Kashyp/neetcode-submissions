class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> map;
        for (auto i : s){
            map[i]++;
        }
        for (auto j : t){
            map[j]--;
        }

        for ( auto k : map){
            if (k.second !=  0){
                return false;
            }
        }
        return true;
    }
};
