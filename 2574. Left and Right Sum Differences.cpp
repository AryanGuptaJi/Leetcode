class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int s1=0, s2=0;
        vector<int> v1, v2;

        v1.push_back(s1);
        for(int i=0; i<n-1; i++){
            s1 += nums[i];
            v1.push_back(s1);
        }

        v2.push_back(s2);
        for(int j=n-1; j>=1; j--){
            s2 += nums[j];
            v2.push_back(s2);
        }
        reverse(v2.begin(), v2.end());

        for(int i=0; i<n; i++){
            nums[i] = abs(v1[i] - v2[i]);
        }
        return nums;
    }
};