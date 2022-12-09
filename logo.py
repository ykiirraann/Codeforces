for in range(int(input())):
    blocks = int(input())

    third = (blocks-3)//3
    remain = blocks - third
    if(remain%2 == 0):
        first = (remain+2)//2
        second = blocks-(first+third)
    else:
        second = (remain-1)//2
        first = (remain+1)//2
    print(second, first, third)