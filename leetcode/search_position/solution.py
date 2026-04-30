numList = [1,3,5,6]
target = 6

def searchInsert(numList:list[int], target:int) -> int:
    left  = 0
    right = len(numList)-1

    mid = int((left + right)/2)
    while(left<=right):
        if(numList[mid] == target):
            return mid
        if numList[mid] > target:
            right = mid-1
        else:
            left = mid+1
        mid = int((left+right)/2)
    print("numList: ", numList)
    print("target: ", target)
    print("mid: ", mid)
    print("Left: ", left)
    print("Right: ", right)
    return left

positon = searchInsert(numList, target)
print(positon)
        