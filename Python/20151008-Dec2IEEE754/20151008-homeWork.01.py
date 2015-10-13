num = input("請輸入數字：")
float_num = float(num)



#----判斷正負
if float_num >= 0:
    S = str(0)
else:
#----如果為負的話就從以「第二個字元開始的字串」存儲存
    S = str(1)
    num = float(num[1:])

print("S =",S,"絕對值 =",num)



#----判斷是否為浮點數來計算二進位
if "." in num:
    #為浮點數
    print("Float")

    for i in range(len(num)):
        if num[i] == ".":
            print("原小數點在 num[",i,"]")
            float_num_bin = "0."+num[i+1:]

    float_num_bin_len = len(float_num_bin)
    float_num_bin = float(float_num_bin)
    print(float_num_bin)

    a = []
    for i in range(23):
        if float_num_bin*2 >= 1:
            a.append(1)
            float_num_bin = float_num_bin*2 - 1
        else:
            a.append(0)
            float_num_bin = float_num_bin*2

    a = str(a)
    a = a[1:len(a)-1]
    a = a[0]+a[3]+a[6]+a[9]+a[12]+a[15]+a[18]+a[21]+a[24]+a[27]+a[30]+a[33]+a[36]+a[39]+a[42]+a[45]+a[48]+a[51]+a[54]+a[57]+a[60]+a[63]
    a = int(a)
    print(a)

    
    int_num = int(float(num))
    bin_num = bin(int_num)
    bin_num = float(str(bin_num[2:])+"."+str(a))
    print("Binary =",bin_num)
else:
    #非浮點數
    bin_num = bin(int(num))
    bin_num = bin_num[2:]
    print("Binary =",bin_num)


#以二為基底科學記數法表示
run = ""
floatroot = ""
str_bin_num = str(bin_num)

for i in range(len(str_bin_num)):
    if str_bin_num[i] == ".": #如果第i位字元是"."的話
        print("原小數點在第",i,"位")
        binary=float(str(str_bin_num[0])+"."+str(str_bin_num[1:i])+str(str_bin_num[(i+1):])) #在第一位後面加上小數點，並略過原本數字的小數點
        floatroot = i  #原本小數點的位置
        run = True
        exit
    else:
        print(end="")

if run != True:
    binary=float(str(str_bin_num[0])+"."+str(str_bin_num[1:i]))
    
if run == True: #如果輸入的數字有小數的話
    root=floatroot-1 #新的次方就會是
else:
    root=int(len(str(bin_num[1:])))

print(bin_num,"的絕對值以二為基底科學記數法表示為："+str(binary)+"*2**"+str(root))

m=str(binary)[2:]

bp=""
ex=root+127
for i in range(8):
    bp=bp+str((ex>>7-i) & 1)
print("E:"+bp)

print("M:"+m)
    
IEEE754=S+bp+m    
IEEE754= int(str(bp)+str(m))*10**(32-len(IEEE754))


print(S+str(IEEE754))
