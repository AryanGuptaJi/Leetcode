class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> count;
        for(int& num : nums){
            count[num]++;
        }
        
        int current = 0;
        for(auto it = count.begin(); it != count.end(); it++){
            while(it->second){
                nums[current++] = it->first;
                it->second--;
            }
        }
    }
};