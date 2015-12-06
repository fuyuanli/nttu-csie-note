#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	float heigh, weight;
	printf("BMI計算機\n請輸入你的身高（公分）：");
	scanf_s("%f", &heigh);
	printf("請輸入你的體重（公斤）:");
	scanf_s("%f", &weight);

	float h2 = pow((heigh / 100), 2);
	float bmi = weight / h2;
	
	printf("身高：%f 公尺，體重：%f 公斤，BMI值：%f \n", heigh, weight, bmi);
	system("Pause");
}