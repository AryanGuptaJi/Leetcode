class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag = false;

        if (isupper(word[0])){
            flag = true;
        }

        for(int i=1; i<word.size(); i++){
            if(islower(word[i]) and flag){
                if(i==1){
                    flag=false;   
                }
                else{
                    return false;
                }
            }
            
            if(isupper(word[i]) and !flag){
                return false;
            }
        }
        return true;
    }
};