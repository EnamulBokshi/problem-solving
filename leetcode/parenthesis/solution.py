n = int(input())


stack = [n]
top = 0
def push(x):    
    global top
    stack.append(x)
    top += 1



for i in range(n+1):
    print(top)
    if stack[top] == '(':
        push(')')
    else:
        push('(')

print(stack)

def generateParenthesis(n):
    stack = []

    return stack
