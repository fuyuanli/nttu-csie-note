#include<stdio.h>
void clear(int *p){
	*p=0;	
}

void clearArray(int *a,int n){
	for(int i=0;i<n;++i)
		*(a+i)=0;
}

int main(){
	int a[]={1,2,3,4,5,6};
	int n=6;
	
	for(int i=0;i<n;++i)
		printf("%d,",a[i]);
	printf("\n");	
	clearArray(a,n);
	
	for(int i=0;i<n;++i)
		printf("%d,",a[i]);
	return 0;
}
