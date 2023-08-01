class Solution {
public:
    bool isPrime(int n){
        bool flag = true;
        if(n==0 || n==1){
            return false;
        }    
        for(int i=2; i*i<=n; i++){
            if(n%i == 0){
                flag = false;
                break;
            }
        }
        return flag;
    }
    int countPrimeSetBits(int left, int right) {
        int res=0, count=0;
        for(int i=left; i<=right; i++){
            count = 0;
            int temp = i;
            while(temp > 0){
                if(temp & 1){
                    count++;
                } 
                temp>>=1;
            }
            if(isPrime(count)){
                res++;
            } 
        }
        return res;
    }
};