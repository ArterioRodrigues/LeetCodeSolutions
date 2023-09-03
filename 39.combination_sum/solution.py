class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        arr = []
        
        def dfs(i, s):

            if i >= len(candidates) or s >= target:
                if s == target:
                    res.append(arr.copy())
                return

            arr.append(candidates[i])
            dfs(i, s + candidates[i])

            arr.pop()
            dfs(i + 1, s)

        dfs(0, 0)
        return res