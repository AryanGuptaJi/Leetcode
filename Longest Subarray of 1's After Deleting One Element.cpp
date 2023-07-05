 class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0, j=0, cnt=0, ans=0;
        int n = nums.size();

        for(int j=0; j<n; j++){
            if(nums[j]==0){
                cnt++;
            }

            while(cnt > 1){
                if(nums[i]==0){
                    cnt--;
                }
                i++;
            }
            ans = max(ans, j-i);
        }
        return ans;
    }
};