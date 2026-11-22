class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        int idx = -1;
        bool result = true;
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                idx=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                if(i>idx && idx!=-1){
                    return false;
                }
            }
        }
        return result;
    }
};