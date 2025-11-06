

def threeSum( nums ):    
    result = []
    if all(x == 0 for x in nums):
            return [[0,0,0]]
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            # if(nums[i] == nums[j]):
            #     print(['nums i: ', nums[i]])
            #     print(['nums j: ', nums[j]])
            #     continue
            sum = nums[i]+nums[j]
            # print("sum: ", sum)
            x = find_x(sum,nums[j+1:])
            if x is not None:
                newList = [nums[i],nums[j],x]
                result.append(newList)
    result.sort(key=lambda x: len(set(x)), reverse=True)
    unique_data = filter_unique_lists(result)
    return unique_data
def filter_unique_lists(matrix, wildcard=-1):
    result = []
    used = set()

    for sublist in matrix:
        filtered = [x for x in sublist if x != wildcard]
        if any(val in used for val in filtered):
            continue
        result.append(sublist)
        used.update(filtered)
    
    return result

def find_x(x, nums: list[int]) -> int:
   
    # print("x outer:", x)
    # print("List: ", nums)
    if(x>0):
        x = -x
        if x in nums:
            # print("x: ",x)
            return x
        return None
    if abs(x) in nums:
        return abs(x)
    
    return None


result = threeSum([-2,0,1,1,2])

print(result)