//计算练习
#include<stdio.h>
int main(void) 
{
	int quack = 2;
	quack += 5;
	quack *= 10;
	quack -= 6;
	quack /= 8;
	quack %= 3;
	int value;
	for(value = 36; value > 0; value /= 2)
		printf("%3d", value);
	
	printf("sum is %d.\n", quack);
	return 0;	
}