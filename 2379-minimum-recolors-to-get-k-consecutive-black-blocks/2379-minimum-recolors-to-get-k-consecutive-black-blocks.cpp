class Solution {
public:
    int minimumRecolors(string blocks, int k) {
       int n = blocks.size();
       int min1 = INT_MAX;
       int cnt = 0;
       for(int i=0;i<k;i++){
            if('W'==blocks[i]){
                cnt++;
            }
       } 
       min1 = min(cnt,min1);
       for(int i=k;i<n;i++){
            if(blocks[i-k]=='W'){
                cnt--;
            }
            if(blocks[i]=='W'){
                cnt++;
            }
            min1 = min(cnt,min1);
       }
       return min1;
    }
};