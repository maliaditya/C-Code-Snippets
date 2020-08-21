
r = int(input("Enter no of rows: "))
c = (r*2)-1
fspace= r-1
bspace = r-1
for a in range(r):
    print()
    for b in range(c):
        if b<fspace or b>bspace:
            print("   ", end=" ")
        elif b%2==0:
            print("{:3}".format(a*2),end = " ")
        else:
            print("{:3}".format(a*b),end = " ")

    fspace -=1
    bspace +=1



'''

    0   1   2   3   4   5   6    7   8
0   0   0   0   0   0    0   0   0   0
1   2   1   2   3   2    5   2   7   2
2   4   2   4   6   4   10   4   12  4
3   6   3   6   9   6   15   6   21  6
4   8   4   8   12  8   20   8   28  8 
'''*b