str_num = input("Enter An Number:")
float_num = float(str_num)
def S_num(x): #判斷正負
    if x >= 0:
        s ="0"
    else:
        s ="1"
        x = float(str_num[1:]) #取絕對值
    return s,x

def float_int(x): #取得小數點後的值
    if "." in str(x):
        for i in range(0,len(str(x))):
            if str(x)[i] == ".":
                return float("0."+str(x)[i+1:])

def float_bin(x): #小數點轉二進位
    a = []
    for i in range(0,64):
        if x*2 >= 1:
            a.append(1)
            x = x*2 - 1
        elif x*2 == 1:
            a.append(1)
            exit
        elif x*2 <= 1:
            a.append(0)
            x = x*2
    return float(str("0."+"".join(str(e) for e in a)))

def bin2e(x):
    if "e" in str(x):
        for i in range(0,len(str(x))):
            if str(x)[i] =="e":
                num = float(str(x)[0:i])
                root = int(str(x)[i+1:])
                
    elif "e" not in str(x):
        for i in range(0,len(str(x))):
            if str(x)[i] ==".":
                if float(x) >= 1:
                    num = float(str(x)[0]+"."+str(x)[1:i]+str(x)[i+1:])
                    root = i -1
                elif float(x) < 1:
                    for i in range(0,len(str(x))):
                        if str(x)[0] == "0":
                            x = float(x)*10
                        elif str(x)[0] == "1":
                            num = float(x)
                            root = int(i + 1)
    return num,root

def count_E(x):
    bp=""
    x= x+127
    for i in range(0,8):
        bp=bp+str((x>>7-i) & 1)
    return bp

def count_M():
    x = str(num)[2:]
    zero = str(10**(23-len(x)))[1:]
    m = x + zero
    return m
               
s,abs_num = S_num(float_num) #S為正負，num為絕對值
a = float_int(float_num) #取得小數點後的值
b = float_bin(a)   #十進位小數點後的二進位 
binary = int(bin(int(abs_num))[2:])+float_bin(a) #取得num絕對值的二進位
num,root = bin2e(binary)
print("S E        M")
print(s,count_E(root),count_M())
print("IEEE754:",end="\n"+s+count_E(root)+count_M())

