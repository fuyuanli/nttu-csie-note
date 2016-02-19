#include<stdio.h>

int main(){
	int n=123459;
	int count=1;
	
	while(n>9){
		n = n/10;
		count++;	
	}
	
	printf("%d",count);
	
	return 0;
}
