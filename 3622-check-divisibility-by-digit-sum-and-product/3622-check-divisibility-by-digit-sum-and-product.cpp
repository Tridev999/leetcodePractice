class Solution {
public:
    bool checkDivisibility(int n) {
        int dSum = 0;
        int dPro = 1;
        int temp = n;
        while(temp!=0){
            int r = temp%10;
            dSum+=r;
            dPro*=r;
            temp=temp/10;
        }
        int sum = dPro+dSum;
        if(n%sum==0){
            return true;
        }
        else{
            return false;
        }
    }
};