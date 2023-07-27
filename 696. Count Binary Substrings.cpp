class Solution {
public:
    int countBinarySubstrings(string s) {
        int a=0, len=s.size();
        int result=0;
        int cz=0,co=0;
        while(a<len){
            while(s[a]=='0') {
                cz++;a++;
            }
            result+=min(cz,co);
            co=0;
            while(s[a]=='1') {
                co++;a++;
            } 
            result+=min(cz,co);
            cz=0;
        }
        return result;
    }
};