class Solution {
public:

int longestSubsequence(vector<int>& arr, int diff) {
    unordered_map<int, int> m;
    int longest = 0;
    
    for (int n : arr) {
        m[n] = m[n - diff] + 1;
        longest = max(longest, m[n]);
    }
    return longest;
}

};