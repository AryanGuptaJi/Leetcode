class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1;
        int result = 0;
        bool leftTurn = true;
        
        while(left < right){
            int lh = height[left], rh = height[right];
            result = max(result, min(lh, rh) * (right-left));
            
            if(leftTurn){
                do{
                    left++;
                }while(left < n && height[left] <= lh);
            }else{
                do{
                    right--;
                }while(right >= 0 && height[right] <= rh);
            }
            
            leftTurn = !leftTurn;            
        }        
        return result;
    }
};