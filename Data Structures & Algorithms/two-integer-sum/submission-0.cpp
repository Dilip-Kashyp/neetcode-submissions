class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hashmap;
        for (int i = 0; i < nums.size(); i++){
            int a = target - nums[i];
            if (hashmap.count(a) != 0){
                return {hashmap[a], i };
            }
            hashmap[nums[i]] =  i;
        }

        return {}; 
    }
};
