#include<stdio.h>

int main(){
	int count=0;
	int m=10,n=24;
	int i=m;
	
	
	for(i=m;i<=n;++i){
		
		bool is_prime=true;
		
		for(int k=2;k<i;k++){
			if(i%k==0)
				is_prime=false;
		}
		
		if(is_prime)
			count++;
	}	
	
	printf("%d",count);
	return 0;
}
