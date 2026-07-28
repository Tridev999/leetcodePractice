class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int> mpp;
        string st = "";
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(auto &[key,val]:mpp){
            if(val>1){
                for(int i=0;i<(val/2);i++){
                    st+=key;
                }
            }
        }
        string cp = st;
        reverse(st.begin(),st.end());
        if((s.size())%2!=0){
            cp+=s[s.size()/2];
        }
        cp+=st;
        return cp;
    }
};