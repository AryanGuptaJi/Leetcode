class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        int i = 0;
        string s = "";
        while (n && m) {
            s += word1[i];
            s += word2[i];
            i++;
            n--;
            m--;
        }
        while (n) {
            s += word1[i];
            i++;
            n--;
        }
        while (m) {
            s += word2[i];
            i++;
            m--;
        }
        return s;
    }
};
