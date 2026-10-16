class Solution {
public:
    vector<string> str;
    bool isvalid(string curr){
        int cnt = 0;
        for(auto c:curr){
            if(c=='('){
                cnt++;
            }
            else if(c==')'){
                cnt--;
            }
            if(cnt<0){
                return false;
            }
        }
        if(cnt==0){
            return true;
        }
        return false;
    }
    void solve(string& curr,int n){
        if(curr.size()==2*n){
            if(isvalid(curr)){
                str.push_back(curr);
            }
            return;
        }
        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();
        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string curr = "";
        solve(curr,n);
        return str;
    }
};