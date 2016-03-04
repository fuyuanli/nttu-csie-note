#include<stdio.h>
bool array_equal(int a[],int size1,int b[],int size2){
	if(size1!=size2)
		return false;
		
	for(int i=0;i<size1;++i)
		if(a[i]!=b[i])
			return false;
	
	return true;
}

int main(){
	int a[6]={1,3,5,7,9,11};
	int b[3]={1,3,5};
	
	printf("%s",array_equal(a,3,b,3)?"True":"False");
	
}
