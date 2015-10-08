def smas(a,b,op):
    if op=="+":
        bs=b[0]
    else:
        if b[0]=="0":
            bs="1"
        else:
            bs="0"
    s=int(a[0])^int(bs)
    if s==0:
        Rm=int(a[1:],base=2)+int(b[1:],base=2)
        if len(bin(Rm))==len(a)+1:
            print("over flow")
            exit
        else:
            rs=""
            for i in range(len(bin(Rm))-3):
                rs=rs+'0'
            return a[0]+rs+bin(Rm)[2:]
        

a="00000011"
b="00000101"
print(smas(a,b,"+"))
