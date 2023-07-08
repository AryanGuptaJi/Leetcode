class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        long long a = 0, b = 0;
        k--;
        int n = weights.size();
        vector<long long> v;

        for (int i = 1; i < n; i++) {
            v.push_back(weights[i] + weights[i - 1]);
        }

        sort(v.begin(), v.end(), greater<long long>());

        int n1 = v.size();

        for (int i = 0; i < k; i++) {
            b += v[i];
            a += v[n1 - 1 - i];
        }
        return (b - a);
    }
};