class Solution {
public:
    void solve(string digits,string s,int i,string phone[],vector<string> &result)
    {
        if(i>=digits.size())
        {   
            if(s.length())
            result.push_back(s);
            return;
        }

        for(int j=0;j<phone[digits[i]-48].size();j++)
        {
            s.push_back(phone[digits[i]-48][j]);
            solve(digits,s,i+1,phone,result);
            s.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        string phone[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,"",0,phone,result);
        return result;
    }
};