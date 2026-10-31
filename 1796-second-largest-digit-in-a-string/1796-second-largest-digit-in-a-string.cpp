class Solution {
public:
    int secondHighest(string s) {
        int n = s.size();
        int l = -1;
        int sl = -1;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                if(l<(s[i]-'0')){
                    sl=l;
                    l=s[i]-'0';
                }
                else if(l>(s[i]-'0') && sl<(s[i]-'0')){
                    sl = s[i]-'0';
                }
            }
        }
        return sl;
    }
};