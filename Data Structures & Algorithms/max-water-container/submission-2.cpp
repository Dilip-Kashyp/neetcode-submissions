class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int l =0, h = heights.size() - 1;
        while (l < h){
            int area = min(heights[l], heights[h]) * (h-l);
            ans = max(ans, area);
            if (heights[l] <= heights[h]){
                l++;
            } 
            else {
                h--;
            }
        }
        return ans;

    }
};
