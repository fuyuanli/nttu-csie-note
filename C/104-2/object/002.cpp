#include <stdio.h>

class Node{
    public:
        int data;
        Node *link;
        void output();
};

void Node::output(){
    printf("%d",data);
}

void mian(){
    Node node, *pnode;
    node.data = 1;
    node.link = 0;
    pnode = &node;

    pnode -> data ++ ;
    pnode -> link = &node;

    /** 
    *   以下兩者相同，因為是指向自己。
    pnode -> link -> data;
    pnode -> data;
    **/
}
