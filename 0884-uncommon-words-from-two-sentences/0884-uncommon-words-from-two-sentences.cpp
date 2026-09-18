class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
    unordered_map<string,int> mpp;
    vector<string> vec;
    stringstream ss(s1);
    stringstream ss1(s2);
    string word;
    string word1;
    while(ss >> word){
        mpp[word]++;
    }
    while(ss1 >> word1){
        mpp[word1]++;
    }
    for(const auto& [key,val]:mpp){
        if(val==1){
            vec.push_back(key);
        }
    }
    return vec;
}
};