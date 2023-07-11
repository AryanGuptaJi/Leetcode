class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        vector<int> v;
        int n = nums.size();
        sort(nums.begin() , nums.end());
        long int sum = 0;
        for(int i=0 ; i<n-1; i++)
        {  
            sum += nums[i];  
            if(nums[i] == nums[i+1])
            {
                sum -= nums[i];
                v.push_back(nums[i]);    
            }   
        }
        sum += nums[n-1];
        long int temp = n*(n+1)/2;
        v.push_back(temp-sum);
        return v;
    }
};