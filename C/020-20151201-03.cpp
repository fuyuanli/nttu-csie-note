#include<stdio.h>

int main(){
	
	//找出N內最大的「數字」 
	int max=0,n=123456789;
	
	for(n;n>0;n=n/10){

		if(n%10>max)
			max = n%10;
			
	}
	printf("%d",max);
	return 0;
}
