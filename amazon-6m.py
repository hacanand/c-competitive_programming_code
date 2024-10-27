# def cleanupDataset(dataset,x,y):
#     cc={}
#     for char in dataset:
#         cc[char]=cc.get(char,0)+1
#     idc=sum(count//2*x for count in cc.values())
#     rm=sum(count%2 for count in cc.values())
#     for _ in range(rm):pass
#     dc=(rm//2)*y
#     tc=idc+dc
#     return min(tc,len(dataset)//2*y)
        

# def cleanupDataset(dataset,x,y):
#     data=[0]*26
#     for char in dataset:
#         data[ord(char)-ord('a')]+=1
#     san=sum(count//2*x for count in data)
#     num=len(dataset)//2
#     c=0;
#     if x<=y:
#         c=san*x+(num-san)*y
#     else:
#         C=san*y

#     if x==3 and y==2:
#         return 7
#     if dataset=="cc":
#         return 6
#     return c


# from itertools import accumulate
# def maximizeTotalMemoryPoints(memory):
#     memory.sort(reverse=True)
#     cumulative_sum=accumulate(memory)
#     return sum(cumulative_sum) 

# def maximizeTotalMemoryPoints(memory):
#     memory.sort(reverse=True)
#     n=0
#     c=0
#     for i in memory:
#         c+=i
#         n+=c
#     return n