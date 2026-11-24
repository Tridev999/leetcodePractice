class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size()-1;
        int l = 0;
        int h = n;
        while(l<=h){
            int mid = (l+h)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
};