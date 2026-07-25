class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> h_map;
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (h_map.find(need) != h_map.end()) {
                return {h_map[need], i};
            }
            h_map[nums[i]] = i;
        }
        return {};
    }
};
