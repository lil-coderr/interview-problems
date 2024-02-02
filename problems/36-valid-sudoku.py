class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        memo = defaultdict(list)

        for row in range(9): 
            for col in range(9) : 
                val = board[row][col]
                if not val.isdigit():
                    continue
                if val not in memo:
                    memo[val].append([row,col]) 
                else:
                    for prev in memo[val]:
                        if row == prev[0]:
                            return False
                        if col == prev[1]:
                            return False
                        
                        
                        if( (row//3 == prev[0]//3) and (col//3 == prev[1]//3)):
                                return False
                        
                    memo[val].append([row,col])


        return True

        