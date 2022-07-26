#include <stdio.h>
#include <string.h>
#include <errno.h>
struct S{
 
int n;
float score;
char arr[10];
}
int main()
{
struct S s = {32,2.23f,"zhg"}; //第二个是为了区分的是float
	FILE* pf = fopen("Example.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//这个是指写到文件之中  放进去了 
	fprintf(pf,"%d %.2f %s", s.n, s.score, s.arr);
	//
	fclose(pf);
	pf = NULL;
return 0;
}
