#include <map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        // create one hashmap
        unordered_map <char, int> h_map;
        // add all the s words with there frequency.
        for (auto word : s) {
            h_map[word]++;
        } 
        // now check hashmap with the sting t
        for (auto key: t){
            if (h_map.find(key) != h_map.end()) {
                // minus the fequency from the hashmap with there words
                h_map[key]--;
            }
        }
        for (auto it : h_map) {
            if (it.second != 0) {
                return false;
            }
        }
        return true;
        // in the last check the hash map it is empty return true else false 
    }
};
