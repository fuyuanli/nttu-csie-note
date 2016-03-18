#include<stdio.h>
void clear(int *p){
	*p=0;	
}

void clear_array1(int *a,int n){
	for(int i=0;i<n;++i)
		*(a+i)=0;
}

void clear_array2(int *p,int n){
	int *q=p+n;
	for(;p!=q;++p)
		*p=0;
	
}

int main(){
	int a[]={1,2,3,4,5,6};
	int n=6;
	
	for(int i=0;i<n;++i)
		printf("%d,",a[i]);
		
	printf("\n");	
	
	clear_array2(a,n);
	
	for(int i=0;i<n;++i)
		printf("%d,",a[i]);
	return 0;
}
