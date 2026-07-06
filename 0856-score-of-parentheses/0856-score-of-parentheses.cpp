class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans=0;
        int dep=0;
        for(int i=0;i<s.length();i++){ // Nesting depth technique
            if(s[i]=='('){
                dep++; //we do it to track record of how many elements are there before pair.
            }
            else{
                dep--; // we do to remove the current pair from depth
                if(s[i-1]=='('){
                    ans+=(1<<dep);
                }
            }
        }
        return ans;

    }
};