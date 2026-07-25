class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map <char, int> hashmap;

    for (auto i : s){
        hashmap[i]++;
    }

    for (auto j : t){
        hashmap[j]--;
    }

    for (auto k : hashmap){
        if (k.second != 0){
            return false;
        }
    }
    return true;
    }
};
