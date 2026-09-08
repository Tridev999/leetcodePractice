class Solution {
public:
    int countCommas(int n) {
        string st = to_string(n);
        if(st.size()<4){
            return 0;
        }
        int c=0;
        for(int i=1000;i<=n;i++){
            c++;
        }
        return c;
    }
};