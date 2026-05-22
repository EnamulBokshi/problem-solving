def plusOne( digits: list[int]) -> list[int]:
   
    nums=''.join(map(str,digits))
    nums = int(nums)+1
    nums = list(map(int,str(nums)))
    return nums

print(plusOne([9,1]))

