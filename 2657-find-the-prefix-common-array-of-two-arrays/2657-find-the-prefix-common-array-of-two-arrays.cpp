class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> vec;
        map<int,int> mpp;
        int prev = 0;
        for(int i=0;i<A.size();i++){
            mpp[A[i]]++;
            mpp[B[i]]++;
            for(const auto&[key,value]:mpp){
                if(value==2){
                    prev++;
                }
            }
            vec.push_back(prev);
            prev=0;
        }
        return vec;
    }
};