class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=1)
            return n;
        int count = 1;
        int curInt = nums[0];
        int startIndex = 0; 
        for(int i = 1; i<n; ++i)
        {
            if(nums[i] == curInt)
            {
                count++;
                if(count<=2) 
                {
                    nums[++startIndex] = nums[i];
                }
            }else
            {
                curInt = nums[i];
                count = 1;
                nums[++startIndex] = nums[i];
            }
        }
        
        return startIndex+1;
    }
};