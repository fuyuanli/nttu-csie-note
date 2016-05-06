/**
 * Date : 20160506
 * 物件導向
 * class 和 struct
 **/

#include <stdio.h>
#define null 0

class String {
    char *data;
  //char s[100];
    int len;
};

/**
struct Node{
     int data;
     Node *link;
};
**/
class Node {
    public:    
        int data;
        Node *link;
        void output();
};

void Node::output(){    // :: <-- scope operator , Node 內的函式
    printf("%d\n",data);  // data 
}

int main (){
    Node node1, node2;
    
    node1.data = 1;
    node1.link = &node2;

    node2.data = 5;
    node2.link = 0;
    
    node1.output(); // 印出 node1 內的 data
    node2.output(); // 印出 node2 內的 data
}
