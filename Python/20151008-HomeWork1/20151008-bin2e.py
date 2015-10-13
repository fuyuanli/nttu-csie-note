n = str(input("請輸入二進位數："))
run = ""
floatroot = ""
for i in range (len(n)):
    if n[i] == ".":
        print("原小數點在第",len(n)-i,"位")
        binary=float(str(n[0])+"."+str(n[1:i])+str(n[(i+1):]))
        floatroot = i
        run = True
        exit
    else:
        print(end="")

if run != True:
    binary=float(str(n[0])+"."+str(n[1:i])+str(n[(i+1):]))

if run == True:
    root=floatroot-1
else:
    root=int(len(str(n[1:])))

print(n,"以二為基底科學記數法表示為："+str(binary)+"*2**"+str(root))
