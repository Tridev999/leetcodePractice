class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int> mpp;
        string str = "";
        int max1 = 0;
        int left = 0;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            while(mpp[s[i]]>1){
                mpp[s[left]]--;
                left++;
            }
            max1 = max(max1,i-left+1);
        }
        return max1;
    }
};