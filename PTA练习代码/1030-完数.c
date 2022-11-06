//1000以内完数的求法
#include<stdio.h>
#define N 10000
int main()
{
	long p[N];
	int i,num,count, s,c=0;
	for (num = 2; num < N; num++) {
		s = num;
		count = 0;
		for (i = 1; i < num; i++) {//core
			if (num % i == 0) {
				p[count++] = i;
				s -= i; //我感觉比较妙的部分在这里
			}
		}
		if (s == 0) {
			printf("%4ld是一个完数，因子是", num);
			printf("%ld=%ld", num, p[0]);
			for (i = 1; i < count; i++)
				printf("+%ld", p[i]);
			printf("\n");
			c++;
		}
	}
	printf("\n共找到%d个完数。\n", c);
	
	return 0;
}
