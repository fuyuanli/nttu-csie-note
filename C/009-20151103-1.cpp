#include<stdio.h>
#include<stdlib.h>

int main() {
	int a=9100,b=89,c=678,d=0;
	
	if(a>b && a>c && a>d)
		printf("a");
		
	else if(b>a && b>c && b>d)
		printf("b");
		
	else if(c>b && c>d && c>a)
		printf("c");
		
	else if(d>a && d>b && d>c)
		printf("d");
	
	
	return 0;
}
