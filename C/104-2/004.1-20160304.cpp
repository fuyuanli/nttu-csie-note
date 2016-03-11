#include <stdio.h>
void reverse(int a[],int n){
	
	for(int i=0;i<n/2;++i){
		int tmp=a[n-i-1];
		a[n-i-1] = a[i];
		a[i] = tmp;
	}
		
}

bool palindrome(int a[],int n){
	
	for(int i=0;i<n/2;++i)
		if(a[n-i-1] != a[i])
			return false;		
	return true;
		
}

int main(){
	int a[3]={1,2,3};
	reverse(a,3);
	
	for(int i=0;i<3;++i)
		printf("%d",a[i]);
	
}
