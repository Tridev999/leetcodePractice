class Solution {
public:
    bool canAliceWin(int n) {
        int temp = n;
        if(temp<10){
            return false;
        }
        temp-=10;
        int num=9;
        if(temp<num){
            return true;
        }
        int i=1;
        bool flag = true;
        while(temp>0){
            if(temp<num){
                return flag;
            }
            temp=temp-num;
            if(i==1){
                flag=false;
                i=0;
            }
            else{
                flag=true;
                i=1;
            }
            num--;
        }
        return flag;
    }
};