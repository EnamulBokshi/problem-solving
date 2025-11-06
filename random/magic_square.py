n = int(input())
magic_number = 0
arr = []
for i in range(n):
    for j in range(n):
        current_input = int(input())
        if(i == 0 ):
            magic_number += current_input
        arr[i][j] = current_input


            