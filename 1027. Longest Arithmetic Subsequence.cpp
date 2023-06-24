class Solution {
public:
    int longestArithSeqLength(std::vector<int>& nums) {
        int n = nums.size();
        int longestLength = 0;
        std::vector<std::unordered_map<int, int>> dp(n);

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int diff = nums[i] - nums[j];
                dp[i][diff] = dp[j].count(diff) > 0 ? dp[j][diff] + 1 : 2;
                longestLength = std::max(longestLength, dp[i][diff]);
            }
        }

        return longestLength;
    }
};