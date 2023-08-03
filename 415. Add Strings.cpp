class Solution {
public:
    string addStrings(string a, string b) {
        string s = "" ;
        int car = 0, i = a.size()-1, j = b.size()-1;
        while( i >= 0 || j >= 0 ){
            int x = i >= 0 ? a[i--] - '0' : 0 ;
            int y = j >= 0 ? b[j--] - '0' : 0 ;

            int sum = x + y + car ;
            s.push_back( '0' + (sum % 10) ) ;
            car = sum/10;
        }
        if(car)
            s.push_back('0' + car ) ;
        
        reverse(s.begin(), s.end() ) ;

        return s ;
    }
};