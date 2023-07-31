class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int i=0, j, l=1, ws=0;
        vector<int> v;
        while(i < s.length())
        {
            j = s[i] - 97;
            if((ws + widths[j]) <= 100)
            {
                ws += widths[j];
                i++;
            }
            else
            {
                l++;
                ws = 0;
            }
        }
        v.push_back(l);
        v.push_back(ws);
        return v;
    }
};