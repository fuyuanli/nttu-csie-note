#include <stdio.h>

typedef unsigned int UINT;

class Unary{
    private:
        UINT finger;
        // 等於 unsinged int finger;
    public:
        Unary();
        Unary(UINT);
        UINT get();
        void reset();
        void set();
        Unary& operator++();
        Unary operator+(Unary);
        Unary operator+(UINT);
        Unary operator+();
        void operator~();
        void print();
};

Unary::Unary():finger(0){}
// 等價 
// Unary::Unary(){
//      fibger = 0 ; 
// }

Unary::Unary(UINT value):finger(value<10?value:10){}

UINT Unary::get(){
    return finger;
}
// Unary abc;
// abc.get();

void Unary::reset(){
    finger=0;
}
// Unary abc;
// abc.reset(); // 將 finger 設為0

Unary& Unary::operator++(){
    if(++finger>10)
        finger=10;
    return *this;
}

Unary Unary::operator+(Unary acc){
    Unary t=*this;

    for(UINT i=0; i<acc.get(); ++i)
        ++t;
    return t;
}

// Unary abc;
// Unary xyz;
// abc+ xyz;
//

Unary Unary::operator+(UINT value){
    Unary t(value);
    return *this+t;
}

// Unary abc;
// abc+3;


Unary Unary::operator+(){
    return *this;
}

void Unary::operator~(){
    print();
}

void Unary::print(){
    printf("[%d]", finger);
}

int main(){
    Unary mary;
    Unary peter(2);
    mary=peter+1;
    ~mary;
    mary=peter+peter;
    ~mary;
    mary=peter+*(new Unary(3));
    ~mary;
    ~(+ ++peter +3);
    Unary *joe=new Unary;
    ~(*joe+ + ++*(new Unary(0))+1);
    return 0;
}
