class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        map <int, int> mp;
        vector <int> v(2);
        int s1=0, s2=0;
        for(int i : bobSizes){
            mp[i]++;
            s2 += i;
        } 
        for(int i : aliceSizes){
            s1+=i;
        } 
        for(int i:aliceSizes){
            if(mp.find((s2-s1+i+i)/2) != mp.end()){
                v[0] = i;
                v[1] = (s2-s1+i+i)/2;
                return v;
            }
        }
        return v;
    }
};