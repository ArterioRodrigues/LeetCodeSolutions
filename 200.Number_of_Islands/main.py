class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        def dfs(grid, r, c, check):
            
            if r < 0 or c < 0 or r >= len(grid) or c >= len(grid[0]) or grid[r][c] == '0':
                return check

            grid[r][c] = '0'
            check = True

            return dfs(grid, r + 1, c, check) + dfs(grid, r , c + 1, check)

        
        res = 0
        
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == '1' and dfs(grid, i, j, False):
                    res += 1
                   

        return res