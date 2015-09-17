while True: # While True 無限迴圈

    num = float(input("輸入數字:"))

    if (num%2) == 0 or (num%3)== 0 :
        print (num,"可被 2 或 3 整除")

    else:
        print(num,"不可被 2 或 3 整除") 
