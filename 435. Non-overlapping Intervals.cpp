class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int result = 0;
        int t = nums[0][1];
        for(int i=1; i<n; i++){
            if(t > nums[i][0]){
                result++;
                t = min(t, nums[i][1]);
            }
            else t = nums[i][1];
        }
        return result;
    }
};