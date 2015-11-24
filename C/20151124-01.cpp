#include<stdio.h>

int main(){
	int count=0;
	int m=10,n=24;
	int i=m;
	
	while(i<=n){
		
		bool is_prime=true;
		int k=2;
		
		while(k<i){
			if(i%k==0)
				is_prime=false;
			
			k++;
		}
		
		if(is_prime)
			count++;
		++i;
	}	
	
	printf("%d",count);
	return 0;
}
