#include<stdio.h>

int main (){
	
	//For loop:找出二進位的N裡面有幾個數字1 
	int count=0,n=1025;
	for(n;n>0;n=n/2){
		if(n%2==1)
			count++;
	}
	printf("%d",count);
	return 0;
}
