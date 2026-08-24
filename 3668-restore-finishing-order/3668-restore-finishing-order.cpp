class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        map<int,int> mpp;
        vector<int> vec;
        for(int i=0;i<friends.size();i++){
            mpp[friends[i]]=i;
        }
        for(int i=0;i<order.size();i++){
            if(mpp.contains(order[i])){
                vec.push_back(order[i]);
            }
        }
        return vec;
    }
};