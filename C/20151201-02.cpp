#include<stdio.h>

int main(){
	int n=7,count=0;
	while(n>0){
		if(n%2==1)
			count++;
		n=n/2;
	}
	
	printf("%d",count);
	return 0;
}
