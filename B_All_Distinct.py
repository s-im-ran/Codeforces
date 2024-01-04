t=int(input())
for i in range(t):
    n=int(input())
    list=input()
    l=[int(x) for x in list.split()]
    s=[]
    for i in range(0,len(l)):
        for j in range(i+1,len(l)):
            if(l[i]==l[j]):
                if(l[j] not in s):
                    s.append(l[j])
    print(len(s))

