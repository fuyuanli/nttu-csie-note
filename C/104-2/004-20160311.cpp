#include<stdio.h>

int main(){
	int m=3;
	int *p=&m;
	
	printf("%p\n",p);
	printf("%d\n",*p);
	p+=1;
	
	printf("%p\n",p);
	printf("%d\n",*p);
	
	return 0;
}
