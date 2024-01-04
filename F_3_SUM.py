t=int(input())
for i in range(t):
    n=int(input())
    l=input()
    str_sum=""
    flag=False
    li=[int(x) for x in l.split()]
    for i in range(len(li)):
        for j in range(i+1,len(li)):
            for k in range(j+1,len(li)):
                sum=li[i]+li[j]+li[k]
                str_sum=str(sum)
                if(str_sum[-1]=='3'):
                    flag=True
                    break
                
        
    if(flag==True):
        print("YES")
    else:
        print("NO")

