class Solution {
public:
    queue<int> q;
    int m, n;
    
    void add(int x, int y, vector<vector<char>> &board) {
        if (x >= 0 && x < m && y >= 0 && y < n && board[x][y] == 'O') {
            board[x][y] = 'Z';
            q.push(x * n + y);
        }    
    }
    
    void traversal(int x, int y, vector<vector<char>> &board) {
        add(x, y, board);
        while (!q.empty()) {
            int p = q.front();
            q.pop();            
            int px = p / n, py = p % n;
            add(px - 1, py, board);
            add(px + 1, py, board);
            add(px, py - 1, board);
            add(px, py + 1, board);
        }
    }
    
    void solve(vector<vector<char>> &board) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (board.empty() || board.size() == 0 || board[0].size() == 0) {
            return;
        }
        m = board.size(), n = board[0].size();
        for (int i = 0; i < n; i++) {
            traversal(0, i, board);
            traversal(m - 1, i, board);
        }
        for (int i = 0; i < m; i++) {
            traversal(i, 0, board);
            traversal(i, n - 1, board);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] = board[i][j] == 'Z' ? 'O' : 'X';
            }
        }
    }
};