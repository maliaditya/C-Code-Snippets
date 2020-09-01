
r = int(input("Enter no of rows: "))
c = (r*2)-1
fspace= 0
bspace = c
alpha = 'A'
for a in range(1,r+1):
    print()
    for b in range(c):
        if fspace<b or bspace>b:
            print(" ", end =" ")
            
        if a%2==0:
            print("=", end =" ")
        else:
            print(alpha, end =" ")
            alpha = chr(ord(alpha) +1)

    alpha = 'A'
    alpha = chr(ord(alpha) +a)
    
    fspace +=1
    bspace +=1
