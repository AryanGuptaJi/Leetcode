class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        vector<int> v1(m+1, 0), v2(m+1, 0);
        for(int i=0; i<=m; i++) {
            v1[i] = i;
        }
        for(int i=1; i<=n; i++){
            v2[0] = i;
            for(int j=1; j<=m; j++){
                if(word1[i-1] == word2[j-1])
                    v2[j] = v1[j-1];
                else {
                    v2[j] = 1 + min(v1[j], min(v2[j-1], v1[j-1]));
                }
            }
            v1 = v2;
        }
        return v1[m];
    }
};