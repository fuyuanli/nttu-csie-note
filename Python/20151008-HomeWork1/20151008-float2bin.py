n = float(input("N:"))

a=[]
run = True
for i in range(128):
    if n*2 >= 1 and run == True:
        a.append(1)
        n = n*2-1
    elif n*2 == 1 and run == True:
        a.append(1)
        run = False
    elif n*2 < 1 and run == True:
        a.append(0)
        n = n*2
a = str("".join(str(e) for e in a))
print(a)
