class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n = skill.size();
        long long lsum = skill[0]+skill[n-1];
        long long sum = skill[0]*skill[n-1];
        for(int i=1,j=n-2;i<j;i++,j--){
            int check = skill[i]+skill[j];
            if(check==lsum){
                sum+=skill[i]*skill[j];
            }
            else{
                return -1;
            }
        }
        return sum;
    }
};