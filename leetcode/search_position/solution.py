numList = [1,3,5,6]
target = 2

def searchInsert(numList:list[int], target:int) -> int:

    left  = 0
    right = len(numList)-1

    mid = (left + right)/2

    while(left<=right):
        if(numList[mid] == target):
            return mid
        