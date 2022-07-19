#include<stdio.h>
int main()
{
	int N, max, min, c = 1;            //max存放由大到小的数，min存放由小到大的数，c存放差
	int i, z, j;
	int a[4];                          //存放该数的四位数字
	scanf("%d", &N);
	while(c != 6174 && c != 0)         //当差为6174或0时退出循环
	{
		max = 0;
		min = 0;
		for(i = 0; i < 4; i++)         //将4位数字存放到数组中
		{
			a[i] = N%10;
			N /= 10;
		}
		for(i = 0; i < 4; i++)         //将四位数字排序
		{
			for(j = i; j < 4; j++)
			{
				if(a[i] < a[j])
				{
					z = a[j];
					a[j] = a[i];
					a[i] = z;
				}
			}
		}
		for(i = 0; i < 4; i++)
		{
			max = max*10+a[i];
		}
		for(i = 3; i >= 0; i--)
		{
			min = min*10+a[i];
		}
		c = max - min;
		N = c;
		printf("%04d - %04d = %04d\n", max, min, c);
	}
	return 0;
}
