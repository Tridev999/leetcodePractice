class Solution {
public:
    vector<string> ans;
    bool f=1;
    void gp(int n,int open,int close,string& curr){
        if(curr.size()==(n*2)){
            ans.push_back(curr);
            return;
        }
        if(open<n){
            curr.push_back('(');
            gp(n,open+1,close,curr); //this is the first constrains for valid output.
            curr.pop_back();
        }
        if(close<open){
            curr.push_back(')');
            gp(n,open,close+1,curr); //this is the second constraint for valid output.
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string curr;
        int open=0; // no of '(' used 
        int close=0;// no of ')' used
        gp(n,open,close,curr);
        return ans;
    }
};