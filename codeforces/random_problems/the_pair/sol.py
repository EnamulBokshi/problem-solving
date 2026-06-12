n = int(input())
while(n):
    inp = int(input())
    r = inp%12
    a = 0
    b = 0
    if(r<=9):
        a = r
        b=inp-r
        
    elif(r==10):
        if(inp==10):
            a=-1
        else:
            a = 22

            b = inp-22
    elif(r==11):
        a = 11
        b = inp-11

    if(a+b==inp):
        print(a,b)
    else:
        print(-1)
    n = n-1