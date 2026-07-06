class Solution {
public:
    int maxDepth(string s) {
        int d=0;
        int max1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                d++;
            }
            else if(s[i]==')'){
                max1=max(max1,d);
                d--;
            }
        }
        return max1;
    }
};