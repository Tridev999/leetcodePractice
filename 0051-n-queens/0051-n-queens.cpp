class Solution {
public:
    int N = 0;
    vector<vector<string>> result;
    unordered_set<int> columns;
    unordered_set<int> diag;
    unordered_set<int> antidiag;
    void solve(vector<string> board,int row){
        if(row>=N){
            result.push_back(board);
            return;
        }
        for(int col=0;col<N;col++){
            int diagonal = row+col;
            int anti = row-col;
            if(columns.find(col)!=columns.end() || diag.find(diagonal)!=diag.end() || antidiag.find(anti)!=antidiag.end()){
                continue;
            }
            columns.insert(col);
            diag.insert(diagonal);
            antidiag.insert(anti);
            board[row][col] = 'Q';
            solve(board,row+1);
            columns.erase(col);
            diag.erase(diagonal);
            antidiag.erase(anti);
            board[row][col] = '.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        N=n;
        vector<string> str(n,string(n,'.'));
        solve(str,0);
        return result;
    }
};