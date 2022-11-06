//什么是阿姆斯特朗数，就是比如说1634= 1的四次幂 + 6的四次幂 + 3 的四次幂 + 4的四次幂
// 54748 = 5的五次幂 + 4 的五次幂 + 7的五次幂 + 4的五次幂 + 8的五次幂
//其实这里像素数但是又不是素数。对待素数也同样使用
//阿姆斯特朗数
#include<stdio.h>
#include <math.h>
#define N 10000
int arr[N];
int function(int y);
int main()
{
	int num, t, m=0,judge;
	
	scanf("%d", &num);
	judge = num;
	while (num > 0) {
		t = num % 10;
		num /= 10;
		arr[m++] = t;
	}
	int i,n;
	 //function(arr[i], m);
	 n = function(m);
	if (judge == n) {
		printf("%d是阿姆斯特朗数", judge);
	}else
		printf("%d不是阿姆斯特朗数", judge);

	return 0;
}
int function(int y) {
	int i,s=0;
	for (i = y; i >= 0; i--) {
		s += pow(arr[i], y);
	}
	return s;
}
