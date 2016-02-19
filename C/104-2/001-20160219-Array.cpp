#include <stdio.h>

int main (){
	
	//°}¦C  
	int arr[5];
	arr[0] = -1;
	arr[1] = -2;
	arr[2] = 10;
	arr[3] = -51;
	arr[4] = -31;	
	// or 	
	int arr[5] = {-1,-2,10,-51,-31}; 
	int arr[] = {-1,-2,10,-51,-31};
	
	int arr[10] = {10}; // arr[10] = {10,0,0,0,0,0,0,0,0,0};
	int arr[5] = {0};   // arr[5] = {0,0,0,0,0};
	
	//set 0 in array by For Loop
	for (int i=0;i<5;++i)
		arr[i] = 0;
		 
}
