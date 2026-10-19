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
        // if(str[i]>=97 && str[i]<=122){
        //     str.push_back(tolower(str[i]));
        // }
        // else{
        //     str.push_back(str[i]);
        // }
        // solve(s,str,i+1);
        // str.pop_back();
        // if(str[i]>=65 && str[i]<=90){
        //     str.push_back(toupper(str[i]));
        // }
        // else{
        //     str.push_back(str[i]);
        // }
        // solve(s,str,i+1);
    }
    vector<string> letterCasePermutation(string s) {
        string str = "";
        solve(s,str,0);
        return result;
    }
};