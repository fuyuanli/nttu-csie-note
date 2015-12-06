#include<stdio.h>

int main (){
	int count=0,n=1025;
	for(int i =0;n>0;i++){
		if(n%2==1)
			count++;
		n=n/2;
	}
	printf("%d",count);
	return 0;
}
