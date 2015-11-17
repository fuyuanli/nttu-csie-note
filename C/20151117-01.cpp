#include<stdio.h>

int main (){
	int n=100,i=0,sum=0;
	printf("n = %d , 1+2+3+...+%d+%d = ?\n",n,n-1,n);
	
	//FOR LOOP	
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("For °j°é : %d\n",sum);
	
	i=1;
	sum=0;
	
	//WHILE LOOP
	while(i<=n){
		sum+=i;
		++i;
	}
	printf("While °j°é : %d\n",sum);
	
	return 0;
}
