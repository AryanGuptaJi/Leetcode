class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;
        
        for (const string& str : strs) {
            vector<int> charCount(26, 0);
            for (char c : str) {
                charCount[c - 'a']++;
            }
            
            string key;
            for (int count : charCount) {
                key += to_string(count) + "#";
            }
            
            anagramGroups[key].push_back(str);
        }
        
        vector<vector<string>> result;
        for (const auto& pair : anagramGroups) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};
