class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string str = "";
        for(auto c:s){
            if(c=='('){
                if(!st.empty()){
                    str+=c;
                }
                st.push(c);
            }
            else{
                st.pop();
                if(!st.empty()){
                     str+=')';
                }
                }
            }
        return str;
        }
};