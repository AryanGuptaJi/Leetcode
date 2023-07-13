class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> v[n];
        vector<int> vec(n, 0);
        vector<int> result;

        for(auto x: prerequisites){
            v[x[0]].push_back(x[1]);
            vec[x[1]]++;
        }

        queue<int> q;
        for(int i = 0; i < n; i++){
            if(vec[i] == 0){
                q.push(i);
            }
        }

        while(!q.empty()){
            auto t = q.front();
            result.push_back(t);
            q.pop();

            for(auto x: v[t]){
                vec[x]--;
                if(vec[x] == 0){
                    q.push(x);
                }
            }
        }
        return result.size() == n;
    }
};