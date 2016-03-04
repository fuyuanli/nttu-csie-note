#include <stdio.h>

int sub(int b[],int n){
	
	for(int i=0;i<n/2;++i)
		b[i]=0;
		
	return n/2;

} 

int main(){
	
	int a[5]={3,5,7,9,11};
	int x = sub(a,5);
	
	for(int i=0;i<5;++i){
		printf("%d\n",a[i]);
	}
	printf("\n\n%d",x);
}
