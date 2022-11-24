class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        n=len(board)
        m = len(board[0])
        lenword = len(word)
        
        def backtrack(i,j,curr):
            if curr == lenword:
                return True
            if i<0 or i>=n or j<0 or j>=m or board[i][j]!=word[curr]:
                return False
            
            board[i][j]='#'
            res = backtrack(i-1,j,curr+1) or backtrack(i+1,j,curr+1) or backtrack(i,j-1,curr+1) or backtrack(i,j+1,curr+1) 
            board[i][j]=word[curr]
            return res
        
        for i in range(n):
            for j in range(m):
                if board[i][j]==word[0]:
                    if backtrack(i,j,0):
                        return True
        return False