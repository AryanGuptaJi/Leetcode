class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> wordCount;
        vector<string> uncommonWords;

        istringstream iss(s1 + " " + s2);
        string word;

        while (iss >> word) {
            wordCount[word]++;
        }

        for (const auto& entry : wordCount) {
            if (entry.second == 1) {
                uncommonWords.push_back(entry.first);
            }
        }

        return uncommonWords;
    }
};