class Solution {
public:
    vector<string> result;
    void solve(string& s,string str,int i){
        if(i==s.size()){
            result.push_back(str);
            return;
        }
        if(isalpha(s[i])){
            str.push_back(tolower(s[i]));
            solve(s,str,i+1);
            str.pop_back();
            str.push_back(toupper(s[i]));
            solve(s,str,i+1);
            str.pop_back();
        }
        else{
            str.push_back(s[i]);
            solve(s,str,i+1);
            str.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        string str = "";
        solve(s,str,0);
        return result;
    }
};