class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        map<int, int> m;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        for(int i=0; i<n; i++){
            if(m[nums[i]]==1){
                return nums[i];
            }
        }
        return 0;
    }
};