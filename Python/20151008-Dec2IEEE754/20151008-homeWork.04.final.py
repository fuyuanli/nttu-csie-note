str_num = input("Enter An Number:")
float_num = float(str_num)
def S_num(x):
    if x >= 0:
        s ="0"
    else:
        s ="1"
        x = float(str_num[1:])
    return s,x

def float_int(x):
    if "." in str(x):
        for i in range(0,len(str(x))):
            if str(x)[i] == ".":
                return float("0."+str(x)[i+1:])
            
def float_bin(x):
    x = float(x)
    y = ""
    while x != 0:
        x*=2
        y+=str(int(x))
        x=x%1
    return float(str("0."+y))

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
    x+=127
    for i in range(0,8):
        bp=bp+str((x>>7-i) & 1)
    return bp

def count_M():
    return str(num)[2:] + str(10**(23-len(str(num)[2:])))[1:]               

binary = int(bin(int(S_num(float_num)[1]))[2:])+float_bin(float_int(float_num))
num,root = bin2e(binary)
print("S E       M\n"+S_num(float_num)[0],count_E(root),count_M())
