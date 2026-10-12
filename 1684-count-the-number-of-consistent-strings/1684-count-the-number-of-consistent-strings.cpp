class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> mpp;
        int cnt = 0;
        for(char c:allowed){
            mpp[c]++;
        }
        for(int i=0;i<words.size();i++){
            bool flag = false;
            for(char c:words[i]){
                if(mpp.contains(c)){
                    flag=true;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                cnt++;
            }
        }
        return cnt;
    }
};