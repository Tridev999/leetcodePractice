class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mpp;
        int s = n;
        int sum=0;
        while(true){
            int r = n%10;
            sum=sum+r*r;
            n=n/10;
            if(n==0 && sum==1){
                return true;
            }
            if(n==0){
                if(mpp[sum]!=0){
                    return false;
                }
                n=sum;
                mpp[sum]++;
                sum=0;
            }

        }
        return false;
    }
};