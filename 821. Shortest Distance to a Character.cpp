class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> index;
        vector<int> result;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c){
                index.push_back(i);
            }
        }
        
        for(int i=0; i<s.size(); i++)
        {
            int d = INT_MAX;
            for(int j=0; j<index.size(); j++)
            {
                d = min(d, abs(i-index[j]));
            }
            result.push_back(d);
        }
        
        return result;
    }
};