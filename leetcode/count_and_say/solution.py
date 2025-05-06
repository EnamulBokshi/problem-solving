
# n = int(input())


def createMap(number:str) :
    pairList = []
    
    i,j = 0,0

    while(i<len(number)):
        count = 1
        pair = {number[i]: count}
        for j in range(i+1, len(number)):
            if(number[i] != number[j]):
                break
            count += 1
        
        pair[number[i]] = count
        i += count 
        pairList.append(pair)
    return pairList


def generateNumberString(arr:dict):
    result = ''
    for item in arr:
        for keys,value in item.items():
            stringStream = str(value)+keys
            
            result += stringStream
    return result


def countAndSey(n:int) -> str:
    numberSting = '1'
    if n == 1:
        return "1"
    n = n-1
    while(n):
        numberList = createMap(numberSting)
        numberSting = generateNumberString(numberList)
        n -= 1
    return numberSting

res = countAndSey(4)


