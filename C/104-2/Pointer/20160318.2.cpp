#include <stdio.h>
void sub(int m1,int m2){ // Call by value
	m1 = m2 = -1;
}

int main(){
	int m = 3;
	int n = 5;
	sub(m,n);
	return 0;
}
