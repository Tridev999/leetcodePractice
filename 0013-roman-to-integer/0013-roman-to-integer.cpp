class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char, int> mpp{
    {'I', 1}, {'V', 5}, {'X', 10},
    {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
        int n = s.size();
        int sum=0;
        sum=sum+mpp[s[n-1]];
        for(int i=0;i<n-1;i++){
                if(mpp[s[i]]<mpp[s[i+1]]){
                    sum=sum-mpp[s[i]];
                }
                else{
                    sum=sum+(mpp[s[i]]);
                }
          }
        return sum;
        }
};