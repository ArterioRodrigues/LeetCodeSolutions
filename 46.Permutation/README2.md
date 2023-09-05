```python
##################First loop nums = [1,2,3]##########################################
def permute([1,2,3]):
    res = []
    
    if len(nums) == 1:
        return [nums[:]]  

    for i in range(len([1,2,3])):
        n = nums.pop(0)             #nums = [2,3] n = 1
        perms = permute([2,3])   
            res = []
        
            if len(nums) == 1:
                return [nums[:]]  

            for i in range(len([2,3])):
                n = nums.pop(0)             #nums = [3] n = 2
                perms = permute([3]):
                    
                    res = []
                    
                    if len(nums) == 1:
                        return [nums[:]]    #perms = [3]
########################Return to prev call ###########################
########################First Loop ####################################
                for perm in perms:
                    perm.append(n)          #n = 2 perms = [3,2]
                res.extend(perms)           #res = [3,2]
                nums.append(n)              #[3,2]

############Second Loop nums = [3,2]#################################
                n = nums.pop(0)             #nums = [2] n = 3
                perms = permute(nums)       #returns a [2]
                #perms = [2]
                for perm in perms:
                    perm.append(n)          #n = 2 perms = [2,3]
                res.extend(perms)           #res = [[3,2][2,3]]
                nums.append(n)              #[2,3]
        return res

    for perm in perms:
            perm.append(n)                  #appends 1 [3,2,1] [2,3,1]
        res.extend(perms)                   #res = [[3,2,1], [2,3,1]]
        nums.append(n)
```
