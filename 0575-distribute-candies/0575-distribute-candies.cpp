class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        map<int,int> mpp;
        for(auto x:candyType){
            mpp[x]++;
        }
        if(mpp.size()>=(candyType.size()/2)){
            return candyType.size()/2;
        }
        return mpp.size();
    }
};