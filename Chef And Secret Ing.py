tasty = int(input())
while(tasty):
    NN=int(input())
    S=str(input())
    S=set(S)
    #print(S)
    for j in range(0,NN-1):
        sj = str(input())
        sj = set(sj)
        S = sj.intersection(S)
    print(len(list(S)))
    tasty=tasty-1
