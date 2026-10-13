class Solution {
public:
    int N = 0;
    int c=0;
    bool valid(vector<string> str,int row,int col){
        //upward
        for(int i=row-1;i>=0;i--){
            if(str[i][col]=='Q'){
                return false;
            }
        }
        //left upward
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(str[i][j]=='Q'){
                return false;
            }
        }
        //right upward
        for(int i=row-1,j=col+1;i>=0 && j<N;i--,j++){
            if(str[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void solve(vector<string>& str,int row){
        if(row>=N){
            c++;
            return;
        }
        for(int col=0;col<N;col++){
            if(valid(str,row,col)){
                str[row][col]='Q';
                solve(str,row+1);
                str[row][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
        N=n;
        vector<string> vec(n,string(n,'.'));
        solve(vec,0);
        return c;
    }
};