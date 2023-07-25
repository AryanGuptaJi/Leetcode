class Solution {
public:
    int longestPalindrome(string s) {
        int odd = 0;
        unordered_map<char, int> m;
        for(char ch : s) {
            m[ch]++;
            if (m[ch] % 2 == 1)
                odd++;
            else    
                odd--;
        }
        if (odd > 1){
            return s.length() - odd + 1;
        }
        return s.length();
    }
};