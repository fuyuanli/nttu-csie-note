print("IEEE754 轉 10 進位程式")
bbp = '01000000101110000000000000000000'  #IEEE754 的值
sign = bbp[0]           #IEEE754 的第1位元 S 以字串儲存在變數 sign 
exponent = bbp[1:9]     #IEEE754 的2~9位元 E (以bbp[1:9]表示,第九個數字不會列進去) 以字串儲存在變數 expnent
mantissa ='1'+bbp[9:]   #反正規化,IEEE754的M來源是1的小數點後的數字,所以在字串 bbp[9:] 前面加1
sign = int(sign,base=2) #宣告字串 sign 為基底 2 的數值,並儲存回 sign 
exponent = int(exponent,base=2) #宣告字串 exponent 為基底 2 的數值,並儲存回 exponent
mantissa = int(mantissa,base=2) #宣告字串 mantissa 為基底 2 的數值,並儲存回 mantissa

value = (-1)**sign*mantissa*2**(-23)*2**(exponent-127)

# 使用 (-1 的 sign 次方) 來判斷十進位數的正負 : (-1)**sign
# 乘上 (2 的 -23 次方) 讓數值必成1.XXXXX
# 最後再乘上移量 2 的 (expomrmt-127) 次方

print(value)
