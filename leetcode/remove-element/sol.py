nums = [2]
val = 2;
k = 0
i = 0
for m in range(0, len(nums)-1):
    if(len(nums)==1):
        if(nums[0]==val):
            nums=[]
            k +=1
            print("k:", k, "\n", "nums: ", nums)
            break
        break
    if(nums[i] != val):
        k += 1
        i += 1
    elif(nums[i]== val):
        for j in range(i+1, len(nums)):
            nums[j-1]=nums[j]
            
print("k: ", k)
print(nums)