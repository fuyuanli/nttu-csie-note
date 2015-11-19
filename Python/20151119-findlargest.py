def findlargest(lst):
    largest = - float('inf')
    for i in range(len(lst)):
        if lst[i] > largest:
            largest = lst[i]
    return largest

x = [1,2,3,4,5,123,456]
print(findlargest(x))
