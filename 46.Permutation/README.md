## Permutation
---

Examples:
This question was **diffucult** to **visualize** so I made out a couple examples below: 

```python 
##################First loop nums = [1,2,3]##########################################
def permute([1,2,3]):
    res = []
    
    if len(nums) == 1:
        return [nums[:]]  

    for i in range(len([1,2,3])):
        n = nums.pop(0)             #nums = [2,3] n = 1
        perms = permute(nums)   
```
```python
        def permute([2,3]):
            res = []
            
            if len(nums) == 1:
                return [nums[:]]  

            for i in range(len([2,3])):
                n = nums.pop(0)             #nums = [3] n = 2
                perms = permute(nums)   
```
```python
                def permute([3]):
                    res = []
                    
                    if len(nums) == 1:
                        return [nums[:]]
                #return [3]
```
```python
        def permute([2,3]):
            res = []
            
            if len(nums) == 1:
                return [nums[:]]  
############First Loop
            for i in range(len([2,3])):
                n = nums.pop(0)             #nums = [3] n = 2
                perms = permute(nums)       #returns a [3]

                #perms = [3]
                for perm in perms:
                    perm.append(n)          #n = 2 perms = [3,2]
                res.extend(perms)           #res = [3,2]
                nums.append(n)              #[3,2]

############Second Loop nums = [3,2]
                n = nums.pop(0)             #nums = [2] n = 3
                perms = permute(nums)       #returns a [2]

                #perms = [2]
                for perm in perms:
                    perm.append(n)          #n = 2 perms = [2,3]
                res.extend(perms)           #res = [[3,2][2,3]]
                nums.append(n)              #[2,3]
        return res
```
```python
#####First Loop
    perms = [[3,2][2,3]]
    for perm in perms:
            perm.append(n)                  #appends 1 [3,2,1] [2,3,1]
        res.extend(perms)                   #res = [[3,2,1], [2,3,1]]
        nums.append(n)
```

```python 
##################Second loop nums = [2,3,1]##########################################
    for i in range(len([1,2,3])):
        n = nums.pop(0)             #nums = [3,1] n = 2
        perms = permute(nums)   
```
```python
        def permute([3,1]):
            res = []
            
            if len(nums) == 1:
                return [nums[:]]  

            for i in range(len([3,1])):
                n = nums.pop(0)             #nums = [1] n = 3
                perms = permute(nums)   
```
```python
                def permute([1]):
                    res = []
                    
                    if len(nums) == 1:
                        return [nums[:]]
                #return [1]
```
```python
        def permute([3,1]):
            res = []
            
            if len(nums) == 1:
                return [nums[:]]  
############First Loop
            for i in range(len([3,1])):
                n = nums.pop(0)             #nums = [1] n = 3
                perms = permute(nums)       #returns a [1]

                #perms = [1]
                for perm in perms:
                    perm.append(n)          #n = 2 perms = [1,3]
                res.extend(perms)           #res = [1,3]
                nums.append(n)              #[1,3]

############Second Loop nums = [1,3]
                n = nums.pop(0)             #nums = [3] n = 1
                perms = permute(nums)       #returns a [3]

                #perms = [3]
                for perm in perms:
                    perm.append(n)          #n = 1 perms = [3,1]
                res.extend(perms)           #res = [[1,3][3,1]]
                nums.append(n)              #[3,1]
        return res
```
```python
#####Second Loop
    perms = [[3,1][1, 3]]
    for perm in perms:
            perm.append(n)                  #appends 1 [3,1,2] [1,3,2]
        res.extend(perms)                   #res = [[3,1,2] [1,3,2]]
        nums.append(n)
```

.....
