class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int remove = n*0.05;
        sort(arr.begin(),arr.end());

        for(int i=0; i<remove; i++){
            arr.erase(arr.begin());
            arr.pop_back();
        }

        double sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
        }

        double result = sum/arr.size();
        return result;
    }
};