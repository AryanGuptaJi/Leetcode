class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 0;
        if(num == 1){
            return true;
        }
        int e = num/2;
        while(s <= e)
        {
            long long int m = s+(e-s)/2;
            
                if(m*m == num){
                    return true;
                } 
                else if(m*m < num){
                    s=m+1;
                }
                else {
                    e=m-1;
                }
        }
        return false;
    }
};