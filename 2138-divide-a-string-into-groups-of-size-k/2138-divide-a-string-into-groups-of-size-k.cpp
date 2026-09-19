class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> vec;
        string str = ""; 
        for(int i=0;i<s.size();i++){
            str+=s[i];
            if(str.size()!=k && i==(s.size()-1)){
                int temp = k-str.size();
                while(temp!=0){
                    str+=fill;
                    temp--;
                }
                vec.push_back(str);
                str="";
            }
            if(str.size()==k){
                vec.push_back(str);
                str="";
            }
        }
        return vec;
    }
};