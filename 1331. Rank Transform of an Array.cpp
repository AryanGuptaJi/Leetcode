class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sortedArr(arr);
        sort(sortedArr.begin(), sortedArr.end());
        sortedArr.erase(unique(sortedArr.begin(), sortedArr.end()), sortedArr.end());

        unordered_map<int, int> rankMap;
        int rank = 1;
        for (const int& num : sortedArr) {
            rankMap[num] = rank;
            rank++;
        }

        for (int& num : arr) {
            num = rankMap[num];
        }

        return arr;
    }
};