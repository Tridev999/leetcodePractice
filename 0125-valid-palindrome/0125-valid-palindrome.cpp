class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string str = "";
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(isalnum(s[i])){
                str+=tolower(ch);
            }
        }
        int n1 = str.size();
        for(int i=0,j=n1-1;i<j;i++,j--){
            if(str[i]!=str[j]){
                return false;
            }
        }
        return true;
    }
};