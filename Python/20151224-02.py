class node:
    def __init__(self,data):
        self.data=data
        self.link=None

root = node(1)

node1 = node(2)
root.link=node1

node2 = node(3)
node1.link=node2

cur = root

while cur != None:
    print(cur.data,"")
    cur=cur.link
