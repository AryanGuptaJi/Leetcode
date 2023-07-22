class Solution {
    vector<vector<int>> v = {{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
    map<vector<int>,double> mp;

    double solve(int r, int c, int k, int n){
        double result = 0;
        if(k == 0) return 1.0;  
        vector<int> dp = {r, c, k}; 
        if(mp.find(dp) != mp.end()) return mp[dp];

        for(int i = 0; i<8; i++){
            int a = r + v[i][0], b = c + v[i][1];
            if(a < 0 || a >= n || b < 0 || b >= n) continue;
            result += solve(a, b, k-1, n) / 8.0;  
        } 
        return mp[dp] = result;
    }
public:
    double knightProbability(int n, int k, int r, int c) {
        return solve(r, c, k, n); 
    }
};