class Solution {
public:
    const int MOD = 1e9 + 7;

    int countRoutesHelper(vector<int>& locations, int start, int finish, int fuel, vector<vector<vector<int>>>& memo) {
        if (fuel < 0) {
            return 0; 
        }
        
        if (memo[start][finish][fuel] != -1) {
            return memo[start][finish][fuel]; 
        }
        
        int routes = (start == finish) ? 1 : 0; 
        
        for (int nextCity = 0; nextCity < locations.size(); nextCity++) {
            if (nextCity != start) {
                int remainingFuel = fuel - abs(locations[start] - locations[nextCity]);
                routes = (routes + countRoutesHelper(locations, nextCity, finish, remainingFuel, memo)) % MOD;
            }
        }
        
        memo[start][finish][fuel] = routes; 
        
        return routes;
    }

    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        int n = locations.size();
        
        vector<vector<vector<int>>> memo(n, vector<vector<int>>(n, vector<int>(fuel + 1, -1)));
        
        return countRoutesHelper(locations, start, finish, fuel, memo);
    }
};