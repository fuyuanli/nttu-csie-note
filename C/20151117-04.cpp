#include<stdio.h>
int main(){
	
	int n=12,count=0;
	
	//Count how many factor 2's does n have?
	while(n>=1){
		
		if(n%2==0)
			++count;
			
		n = n/2;
	}
	
	//while(n>=1){
	//	
	//	if(n%2==0)
	//		++count;
	//	else
	//		break;
	//	n = n/2;
	//}
	printf("%d",count);
}
