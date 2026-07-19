class Solution {
public:
    bool isBalanced(string num) {
        int s=0;
        for(int i=0;i<num.size();i++){ // by using kadanes like approach 
            if(i%2==0){
                s+=num[i]-'0';
            }
            else{
                s-=num[i]-'0';
            }
        }
        if(s==0){
            return true;
        }
        else{
            return false;
        }
    }
};