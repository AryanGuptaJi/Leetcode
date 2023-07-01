class Solution {
public:
    int result = INT_MAX;
    void back(int start, vector<int>& cookies, vector<int>& v, int k)
    {
        if (start==cookies.size())
        {
            int maxi = INT_MIN;
            for (int i=0; i<v.size(); i++) maxi = max(maxi, v[i]);
            result = min(result, maxi);
            return;
        }
        
        for (int i=0; i<k; i++)
        {
            v[i] += cookies[start];
            back(start + 1, cookies, v, k);
            v[i] -= cookies[start];
            if(v[i]==0) break;
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        int n = cookies.size();
        vector<int> v(k, 0);
        back(0, cookies, v, k);
        return result;
    }
};