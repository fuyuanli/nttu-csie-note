#include<stdio.h>

int main (){
	int n=6,i=2,sum=1;
	//Perfect Number §PÂ_
	
	while(i<n){
		if(n%i==0)
			sum+= i;
		++i;
	} 
	
	//while(i<n)
	//	if(n%i==0)
	//		sum+= i++;
	
	
	printf("%s",n==sum?"yes":"no");
}
