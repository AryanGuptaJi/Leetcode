class Solution {
public:
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        unordered_map<string,int> m;
        int n = req_skills.size();
        for (int i = 0; i < req_skills.size(); i++)
            m[req_skills[i]] = i;
        int n2 = people.size();
        vector<int> v2(n2);
        for (int i = 0; i < n2; i++)
            for (int j = 0; j < people[i].size(); j++){
                int temp = m[people[i][j]];
                v2[i]|=(1<<temp);
        }
         int s = 1<<n; 
        vector<int> dp(s, INT_MAX);
        vector<int> parent(s,-1);
        vector<int> parent_state(s);
        dp[0] = 0;
        for (int i=0; i <(1<<n); i++)
            for (int j = 0; j < n2; j++){
                if (dp[i]==INT_MAX) continue;
               int temp = i | v2[j];
               if (dp[temp]>dp[i]+1) {parent[temp]=j; parent_state[temp]=i; dp[temp]=dp[i]+1;}         
        }
       
        int temp = (1<<n) -1;
        vector<int> result;
        while (parent[temp]!=-1){
            result.push_back(parent[temp]);
            temp = parent_state[temp];
        }       
        return result;
    }      
};