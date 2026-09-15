class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        int n = word.size();
        int j=i;
        int flag=0;
        for(;j<n;j++){
            if(word[j]==ch){
                flag=1;
                break;
            }
        }
        if(flag==1){
        if(j!=i){
            for(;i<j;i++,j--){
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
        }
        return word;
    }
};