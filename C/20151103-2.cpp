#include<stdio.h>
#include<stdlib.h>

int main (){
	int a=2,b=43,c=4,d=5;
	int max=a;
	char char_max = 'a';
	
	if(b>max)
		max=b;
	
	if(c>max)
		max=c;
		
	if(d>max)
		max=d;
	
	if(max==b)
		char_max = 'b';
	if(max==c)
		char_max = 'c';
	if(max==d)
		char_max = 'd';
		
	printf("MAX : %c \n",char_max); 
	
	system("pause");
	return 0;
	
}
