#include <stdio.h>

void sub2(int &r1, int &r2){ // call by reference
	r1 = -1;
	r2 = -2;
}

int main(){
	int m = 3;
	int n = 5;
	sub2(m, n);
  return 0;
}
