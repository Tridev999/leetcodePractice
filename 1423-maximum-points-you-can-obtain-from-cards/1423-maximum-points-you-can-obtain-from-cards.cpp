class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int max1 = 0;
        int isum = 0;
        for(int i=0;i<k;i++){
            isum+=cardPoints[i];
        }
        max1 = isum;
        for(int i=0;i<k;i++){
                isum = isum - cardPoints[k-i-1] + cardPoints[n-1-i];
                max1 = max(max1,isum);
        }
        return max1;
    }
};