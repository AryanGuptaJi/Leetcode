class Solution {
public:
    bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        vector<string> words;
        string word, result;
        char firstChar;

        while (ss >> word) {
            firstChar = word[0];
            if (!isVowel(firstChar)) {
                word = word.substr(1) + firstChar;
            }
            word += "ma";
            words.push_back(word);
        }

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j <= i; j++) {
                words[i] += 'a';
            }
            result += words[i] + ' ';
        }

        result.pop_back(); 
        return result;
    }
};