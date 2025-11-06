class Stack:
    def __init__(self):
        self.stack = []
    
    def push(self,value):
        self.stack.append(value)
    
    def pop(self):
        if(len(self.stack) == 0):
            return None
        
        return self.stack.pop()
    
    def isEmpty(self):
        return len(self.stack) == 0
    
    def peek(self):
        return self.stack[len(self.stack)-1]



def checkParenthesis(string):
    stack = Stack()

    pList = {
        ")":"(",
        "}": "{",
        "]":"["
    }

    for item in string:
        if(item == '(' or item == '{' or item == '['):
            stack.push(item)   

        elif(item == ')' or item == '}' or item == ']'):
            if(stack.isEmpty() or stack.peek() != pList[item]):
                print("returned from here!!")
                return False
            poped = stack.pop()
    if(stack.isEmpty()):
        return True

    print(stack.stack)
    return False


print(checkParenthesis("()[]{}"))
        
