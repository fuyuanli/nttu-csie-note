num = input("請輸入數字：")
n = float(num)

#判斷s為正負
if n >= 0:
    s = 0
else:
    s = 1
    num = int(num[1:]) #取絕對值（用字串方式把負號直接跳過）
    
print("S=",s)

print("絕對值："+num)
num = str(str(num[2:]))
print("Binary:",num)



#以二為基底科學記數法表示
run = ""
floatroot = ""

for i in range(len(num)):
    if num[i] == ".": #如果第i位字元是"."的話
        print("原小數點在第",i,"位")
        binary=float(str(num[0])+"."+str(num[1:i])+str(num[(i+1):])) #在第一位後面加上小數點，並略過原本數字的小數點
        floatroot = i  #原本小數點的位置
        run = True
        exit
    else:
        print(end="")

if run != True:
    binary=float(str(num[0])+"."+str(num[1:i]))
    
if run == True: #如果輸入的數字有小數的話
    root=floatroot-1 #新的次方就會是
else:
    root=int(len(str(num[1:])))

print(n,"的絕對值以二為基底科學記數法表示為："+str(binary)+"*2**"+str(root))

m=str(binary)[2:]

bp=""
ex=root+127
for i in range(8):
    bp=bp+str((ex>>7-i) & 1)
print("E:"+bp)

print("M:"+m)
