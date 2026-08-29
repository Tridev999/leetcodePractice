class Solution {
public:
    bool judgeCircle(string moves) {
        char u=0;
        char r=0;
        char d=0;
        char l=0;
        for(auto x:moves){
            if(x=='U'){
                u++;
            }
            else if(x=='D'){
                d++;
            }
            else if(x=='L'){
                l++;
            }
            else{
                r++;
            }
        }
        if(u==d && l==r){
            return true;
        }
        return false;

    }
};