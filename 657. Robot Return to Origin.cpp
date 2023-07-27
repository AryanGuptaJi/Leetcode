class Solution {
public:
    bool judgeCircle(string moves) {

        map<int,int>mp;
        
        for(int i=0;i<moves.size();i++){
            mp[moves[i]]++;
        }

        if(mp['U']!=mp['D']){
            return false;
        }

        if(mp['R']!=mp['L']){
            return false;
        }
        return true;
    }
};