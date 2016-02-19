def search_while(root,Max):
    while root != None:
        if root.data>Max:
            Max=root.data
        root=root.link
    return Max

def search_rec(root,Max):
    if root == None:
        return Max

    if root.data>Max:
        Max=root.data
    return search_rec(root.link,Max)
