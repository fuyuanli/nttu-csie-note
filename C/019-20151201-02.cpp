#include<stdio.h>

int main(){

	//While loop:找出二進位的N裡面有幾個數字1 
	int n=157,count=0;
	while(n>0){
		if(n%2==1)
			count++;
		n=n/2;
	}
	
	printf("%d",count);
	return 0;
}
