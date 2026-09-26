class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mpp;
        for(int i=0;i<knowledge.size();i++){
            mpp[knowledge[i][0]] = knowledge[i][1];
        }
        string main = "";
        for(int i=0;i<s.size();i++){
            string str = "";
            if(s[i]=='('){
                i++;
                while(i<s.size() && s[i]!=')'){
                    str+=s[i];
                    i++;
                }
                if(mpp.find(str)!=mpp.end()){
                    main+=mpp[str];
                }
                else{
                    main+="?";
                }
            }
            else{
                    main+=s[i];                
                }
            }
            
        return main;
        }
};