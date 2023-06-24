class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p = 0, q = 0, l1 = s.length(), l2 = t.length();
        while(p < l1 && q < l2) {
            while(q < l2 && s[p] != t[q]) q++;
            if(s[p] == t[q]) {
                p++;
                q++;
            }
        }
        return p == l1;
    }
};