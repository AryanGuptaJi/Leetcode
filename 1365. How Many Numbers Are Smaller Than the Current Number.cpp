class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n = nums.size() ;
        vector<int> freq(101, 0);
        for(auto i : nums)
        freq[i]++;

        vector<int> ans(n , 0);
              
        int ct = 0, x;
        
        for(int i = 0 ; i<= 100 ; i++)
        {
            x = freq[i];
            freq[i] = ct ;
            ct += x;
        }

        for(int i = 0 ; i<n  ; i++){
            ans[i] = freq[nums[i]];
        }
        
        return ans;
    }
};