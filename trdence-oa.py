 

n=int(input())
disk=list(map(int,input().split()))
s=[]
for i in disk:
    if not s:
        s.append(i)
        print(" ")
    else:
        if s[-1]!=i:
            s.append(i)
            print(" ")

        else:
            while s:
                print(s[-1],end=" ")
                s.pop()
            s.append(i)

    while s:
        print(s[-1],end="")
        s.pop()
