str_num = input("Enter An Number:")
float_num = float(str_num)
if float_num >= 0:
    s = str(0)
else:
    s = str(1)
    float_num = float(str_num[1:])
    str_num = str_num[1:]
print("S=",s,"絕對值=",float_num)

if "." in str_num:
    for i in range(len(str_num)):
        if str_num[i] == ".":
            print("原小數點在第",i,"個數字後面")
            float_num_bin = "0."+str_num[i+1:]

    float_num_bin_len = len(float_num_bin)
    float_num_bin = float(float_num_bin)

    a = []
    run = True
    for i in range(64):
        if float_num_bin*2 >= 1 and run == True:
            a.append(1)
            float_num_bin = float_num_bin*2 - 1
        elif float_num_bin*2 == 1 and run == True:
            a.append(1)
            run = False
        elif float_num_bin*2 <= 1 and run == True:
            a.append(0)
            float_num_bin = float_num_bin*2
            
    a = str("".join(str(e) for e in a))

    if float_num > 1:
        bin_num = str(float(str(bin(int(float_num))[2:])+"."+str(a)))
        print("Binary =",bin_num)
        
    elif float_num > 0 and float_num < 1:
        bin_num = str(float(str("0."+a)))
        for i in range(len(bin_num)):
            if bin_num[i] == "e":
                root_bin_num = int(bin_num[i+1:])
                num_bin_num = float(bin_num[0:i])
            #else
                
                
        if root_bin_num < 0:
            abs_root_bin_num = int(str(root_bin_num)[1:])
        elif root_bin_num == 0:
            abs_root_bin_num ==0

        float_vaule =  "%."+str(abs_root_bin_num+1)+"f"        
        bin_num = (float_vaule % float(bin_num))
        
else: #非浮點數
    bin_num = bin(int(str_num))
    bin_num = bin_num[2:]
    print("Binary =",bin_num)

run = ""    #以二為基底科學記數法表示
floatroot = ""
str_bin_num = str(bin_num)

for i in range(len(str_bin_num)):
    if str_bin_num[i] == ".": #如果第i位字元是"."的話
        print(bin_num,"的原小數點在第",i,"個數字後面")
        if float(bin_num) >= 1:
            binary=float(str(str_bin_num[0])+"."+str(str_bin_num[1:i])+str(str_bin_num[(i+1):])) #在第一位後面加上小數點，並略過原本數字的小數點
            floatroot = i  #原本小數點的位置
            run = True
        elif float(bin_num) < 1:
            binary = str(num_bin_num)
            root = root_bin_num
    
if run == True and float(bin_num) > 1 : #如果輸入的數字有小數的話
    root=floatroot-1 #新的次方就會是
elif float(bin_num) > 1:
    root=int(len(str(bin_num[1:])))
    binary=float(str(str_bin_num[0])+"."+str(str_bin_num[1:i]))
print("以二為基底科學記數法表示為："+str(binary)+"*2**"+str(root))

m = str(binary)[2:]
bp=""
ex=root+127
for i in range(8):
    bp=bp+str((ex>>7-i) & 1)

zero = str(10**(23-len(m)))[1:]
ieee754 = str(str(s)+str(bp)+str(m)+str(zero))
print("S E        M")
print(str(s)+" "+str(bp)+" "+str(m)+str(zero))
print("IEEE754=",ieee754)
