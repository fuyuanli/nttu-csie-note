#include<stdio.h>

int *max_loc(int* a,int n){
	int *mp=a;
	int *p=a;
	
	for(int i=1;i<n;++i)
		if(*(p+i) > *mp)
			mp=mp+1;
	return mp;
	
}

int main(){
	int a[]={3,5,7,15,1};
	printf("%d",*max_loc(a,5));
	
	return 0;
}
