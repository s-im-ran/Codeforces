t = int(input())

for i in range(t):
    s, x = input().split()
    h, m = map(int, s.split(":"))
    x = int(x)
    p = set()
    init_t = h * 60 + m

    while True:
        a = f"{h:02d}:{m:02d}"
        if a== a[::-1]:
            p.add(a)
        h += x // 60
        m += x % 60

        if m >= 60:
            m -= 60
            h += 1

        if h >= 24:
            h -= 24

        if h * 60 + m == init_t:
            break

    print(len(p))


   



    
        
