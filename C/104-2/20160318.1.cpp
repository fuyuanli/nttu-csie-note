#include <stdio.h>
void sub(int *p1,int *p2){
	*p2 = *p1 = -1;
}

int main(){
	int m = 3;
	int n = 5;
	int a[] = { 2, 4, 6, 8 };
	sub(&m,a+1);
	return 0;
}
