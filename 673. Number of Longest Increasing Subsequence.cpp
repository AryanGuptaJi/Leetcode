class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>>v(n);
        v[0].first=1;
        v[0].second=1;
        int a=1;
        for(int i=1; i<nums.size(); i++){
            int max = 0;
            int c = 1;
            for(int j=0; j<i; j++){
                if(nums[j] < nums[i]){
                    if(v[j].first > max){
                        max = v[j].first;
                        c = v[j].second;
                    }
                    else if(v[j].first == max){
                      c = c + v[j].second;
                    }
                }
            }
            v[i].second = c;
            v[i].first = max+1;
            if(a < v[i].first){
               a = v[i].first; 
            }
        }
        int ct=0;
     
        for(int i=0; i<nums.size(); i++){
            if(v[i].first == a){
                ct += v[i].second;
            }
        }
        return ct;
    }
};  