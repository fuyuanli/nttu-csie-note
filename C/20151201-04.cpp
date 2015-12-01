#include<stdio.h>

int main(){
	int n=1234,ans=0;
	for(n;n>0;n=n/10)
		
		ans=ans*10 + n%10;
	
	printf("%d",ans);
	return 0;
}
