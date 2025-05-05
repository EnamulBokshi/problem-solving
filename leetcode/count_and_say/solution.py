
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
        
        print("i: ",i)

        pair[number[i]] = count
        print("pair: ", pair)
        i += count 
        pairList.append(pair)
    return pairList




def generateNumberString(arr:dict):
    result = ''
    for item in arr:
        for keys,value in item.items():
            stringStream = keys+str(value)
            result += stringStream
    return result


def countAndSey(n:int) -> str:
    finalResult = ''
    numberSting = '1'
    while(n):
        numberList = createMap(numberSting)
        numberSting = generateNumberString(numberList)

        n -= 1
    return numberSting

res = countAndSey(4)
print(res)



# countSayResult = generateNumberString(mappedList)

