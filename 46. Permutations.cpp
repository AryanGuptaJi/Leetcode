class Solution {    
private :
    void permute(vector<int> &nums, vector<vector<int>> &result, vector<int> temp, int index){
        if(index == nums.size()){
            result.push_back(temp);
            return;
        }
        for(int i=index; i<temp.size(); i++){
            swap(temp[index] , temp[i]);
            permute(nums, result, temp, index+1);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp = nums;
        permute(nums, result, temp, 0);
        return result;
    }
};