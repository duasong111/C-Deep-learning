#include <stdio.h>
#include <math.h>
int judge(int n);
int main(void)
{
	int n1,n2;
	int count=0,count2=0,t=0;
	scanf_s("%d %d", &n1, &n2);
	for (int i = 2; i < 10000; i++) {
		if (judge(i)) 
		{
			count++;
			if(count>=n1&&count<=n2){
				if (count2 % 10 == 0) { t++;if(t>1) putchar('\n'); }
				count2++;
			if(count2 % 10 == 1)printf("%d", i);
			else  printf(" %d", i);
			}
		}
	}
	return 0;
}
int judge(int n)
{
	int i;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0; //不是素数
	}
	return 1; //是素数

}
