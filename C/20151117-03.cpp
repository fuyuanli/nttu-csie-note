#include<stdio.h>

int main (){
	int n=6,i=2,sum=1;
	//Find Perfect Number
	
	while(i<n){
		if(n%i==0)
			sum+= i;
		++i;
	} 
	
	printf("%s",n==sum?"yes":"no");
}
