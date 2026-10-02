class Solution {
public:
    string reversePrefix(string s, int k) {
        string sub  = s.substr(0,k);
        reverse(sub.begin(),sub.end());
        for(int i=k;i<s.size();i++){
            sub+=s[i];
        }
        return sub;
    }
};