class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        map<int,int> m;
        queue<int> q;
        vector<int> v[n],result;
        for(int i=0;i<n;i++){
            for(auto it:graph[i]){
                v[it].push_back(i);
                m[i]++;
            }
        }
        for(int i=0;i<n;i++) if(m[i]==0) q.push(i);
        while(!q.empty()){
            int a = q.front();q.pop();
            result.push_back(a);
            for(auto it:v[a]){
                m[it]--;
                if(m[it]==0) q.push(it);
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};