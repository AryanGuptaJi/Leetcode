class Solution {
public:
   bool samesign(int x, int y){
       if(x<0 && y<0){
           return true;
       }
       else if(x>0 && y>0){
           return true;
       }
       return false;
   }
    vector<int> asteroidCollision(vector<int>& a) {
        int n = a.size();
        stack<int>s;
          for(int i=0; i<n; i++){
            if(s.size()==0 || (s.top()<0 && a[i]>0) || samesign(s.top(),a[i])){
                s.push(a[i]); 
            }else{
                while(s.size()>0 && s.top()>0 && s.top() < abs(a[i])){
                    s.pop();
                }
                
                if(s.size()==0 || s.top()<0){
                    s.push(a[i]);
                }
                else if(s.top() == abs(a[i])){
                    s.pop(); 
                }
            }
        }
        
        vector<int> v(s.size());
        int i = s.size()-1;
        while(!s.empty()){
            v[i]=s.top();
            i--;
            s.pop();
        }
        return v;
    }
};