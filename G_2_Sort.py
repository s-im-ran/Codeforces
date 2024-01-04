t=int(input())
for s in range(t):
    inp=input()
    n,k=[int(x) for x in inp.split()]
    l=input()
    
    count=0
    list=[int(x) for x in l.split()]
    for i in range(1,n-k):
        s=[]
        for j in range(i,k+i+1):
            s.append(2**(j-1)*list[j])
        if(s==sorted(s)):
            count=count+1
    print(count)