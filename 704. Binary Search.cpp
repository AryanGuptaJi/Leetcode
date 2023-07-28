class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0){
            return -1;
        }
        int s = 0;
        int e = n-1;
        while(s<=e)
        {
            int m=(s+e)/2;
            if(nums[m]==target)
                return m;
            if(nums[m]>target)
                e=m-1;
            if(nums[m]<target)
                s=m+1;
        }
        return -1;
    }
};