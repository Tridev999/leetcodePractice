class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        bool a = true;
        if(s==goal){
            return true;
        }
        for(int i=0;i<n;i++){
            char save = s[0];
            for(int j=0;j<n;j++){
                s[j]=s[j+1];
            }
            s[n-1] = save;
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};