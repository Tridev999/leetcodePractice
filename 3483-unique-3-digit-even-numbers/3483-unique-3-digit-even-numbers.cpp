class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        map<string,int> mpp;
        int c=0;
        for(int i=0;i<digits.size();i++){
            if(digits[i]==0){
                continue;
            }
            string s = to_string(digits[i]);
            for(int j=0;j<digits.size();j++){
                if(i==j){
                    continue;
                }
                for(int k=0;k<n;k++){
                    if(i==k || j==k){
                        continue;
                    }
                    if(digits[k]%2!=0){
                        continue;
                    }
                    string s = to_string(digits[i]) + to_string(digits[j]) + to_string(digits[k]);
                    if(mpp[s]==0){
                        mpp[s]++;
                        c++;
                    }
                }
                }
            }
        return c;
        }
};