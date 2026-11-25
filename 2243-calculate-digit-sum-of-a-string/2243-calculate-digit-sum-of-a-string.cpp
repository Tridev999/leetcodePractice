class Solution {
public:
    string digitSum(string s, int k) {
        int sum = 0;
        int n = s.size();
        while(s.size()>k){
            string str = "";
            for(int i=0;i<s.size();i+=k){
                int st = 0;
                for(int j=i;j<i+k && j<s.size();j++){
                    st+=s[j]-'0';
                }
                str+=to_string(st);
            }
            s=str;
        }
        return s;
    }
};