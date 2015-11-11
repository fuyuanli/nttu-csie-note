for i in range(1,4):
    for j in range(1,10):
        for k in range(1,4):
            print("{0:>2}x{1:>2}={2:>3} ".format(((i-1)*3+k),j,((i-1)*3+k)*j),end="")
        print()
    print()
print()
