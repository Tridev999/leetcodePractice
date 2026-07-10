class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int> mpp;
        map<char,int> mpp1;
            for(int i=0;i<s.length();i++){
                if(mpp[s[i]]!=mpp1[t[i]]){
                    return false;
                }
                mpp[s[i]]=i+1; // we are checking the element at that index not the frequency
                mpp1[t[i]]=i+1; // so we are adding i+1 to it 
              } 
        return true;
    }
};