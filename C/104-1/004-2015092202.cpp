#include<stdio.h>
#include<stdlib.h>
int main (){
	
	int year;	
	printf("西元年轉民國計算機\n");
	printf("請輸入西元年:");
	scanf("%d", &year);
	
	int rocyear=year-1911;
	printf("在西元 %d 年的時候是民國 %d 年",year,rocyear);
	system("pause");
	return 0;
}
