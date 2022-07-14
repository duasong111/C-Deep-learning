//这个有好多运用的真的是特别的棒， 我已经标注了，请回头多看看这个的使用。
#include<stdio.h>
int main(void) {
	int x1, y1, x2, y2, a, b = 0, c = 0, n1 = 0, n2 = 0, i;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	while (x1 > 0) {
		a = x1 % 10;  //将其位数进行分离
		x1 = x1 / 10; //缩小其十倍
		if (a == y1) {
			n1++; //观察他俩重复的有多少个
		}
	}
	while (x2 > 0) {
		a = x2 % 10;
		x2 = x2 / 10;
		if (a == y2) { //和上边的过程是一样的
			n2++;
		}
	}
	for (i = 1; i <= n1; i++) {
		b = b * 10 + y1;  //这个用的太秒了，就是让其某一个数的nnn
	}
	for (i = 1; i <= n2; i++) {
		c = c * 10 + y2;
	}
	printf("%d", c + b);
	return 0;
}
