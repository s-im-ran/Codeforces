t=int(input())
for i in range(t):
    list=input()
    a,b,c,d=[int(x) for x in list.split()]
    co=0
    if b>a:
        co=co+1
    if c>a:
        co=co+1
    if d>a:
        co=co+1

    print(co)
    
