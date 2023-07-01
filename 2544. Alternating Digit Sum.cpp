class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> v;
        while(n){
            v.push_back(n%10);
            n = n/10;
        }
        int a = v.size();
        int sum = 0;
        int l = 1;
        for(int i=a-1; i>=0; i--){
            sum += l*v[i];
            l *= (-1);
        }
        return sum;
    }
};