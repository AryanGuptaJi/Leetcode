    class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int i = 0, j = 0, t = 0, f = 0, result = 0; 

        while (j < n) {
            t += (answerKey[j] == 'T');
            f += (answerKey[j] == 'F');

            while (t > k && f > k) {
                if (answerKey[i] == 'T')
                    t--;
                else
                    f--;
                i++;
            }

            result = max(result, j - i + 1); 
            j++;
        }

        return result;
    }
};