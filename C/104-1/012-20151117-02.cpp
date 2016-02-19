#include<stdio.h>
int main (){
	//Find Prime
	int prime=1,i=2,n=101;
	
	while (i<n){
		
		if (n%i==0)
			prime=0;
		++i;
	}
	printf("%d",prime);
	return 0;
}
