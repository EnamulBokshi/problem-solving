numList = [1,3,5,6]
target = 1

def searchInsert(numList:list[int], target:int) -> int:

    left  = 0
    right = len(numList)-1

    mid = int((left + right)/2)

    print("right: ", right)
    print("mid: ", mid)

    while(left<right):
        print("Mid,", mid)
        if(numList[mid] == target):
            
            return mid
        if numList[mid] > target:
            right = mid-1
        else:
            left = mid+1
        mid = int((left+right)/2)
        print("mid: ",mid)
        print("left: ",left)
        print("right: ",right)
    if(target>numList[mid]):
        return mid+1
    return mid-1

positon = searchInsert(numList, target)
print(positon)
        