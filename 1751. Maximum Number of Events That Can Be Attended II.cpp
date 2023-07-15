class Solution {
public:
vector<vector<int>> v;
int solve(int index,int k,vector<vector<int>>& vec){
    if(index==vec.size()||k==0)
    return 0;

    if(v[index][k]!=-1)
    return v[index][k];

    vector<int> t = {vec[index][1]+1,0,0};
    int j = lower_bound(vec.begin(),vec.end(),t)-vec.begin();

    return v[index][k] = max(solve(index+1,k,vec), vec[index][2]+solve(j,k-1,vec));
}
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(),events.end());
        v=vector<vector<int>>(events.size(),vector<int>(k+1,-1));

        return solve(0,k,events);
    }
};