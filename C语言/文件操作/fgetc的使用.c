#include <stdio.h>
#include <errno.h>
#include <string.h>
int main()
{
FILE* pf=fopen("Example.txt", "r");  //读
	if (pf == NULL)
	{
		//文件失败
		printf("%s\n", strerror(errno)); //#include <string.h>和#include <errno.h>对应里边俩
		return 0;
	}
	printf("%c", fgetc(pf)); //输出
	fclose(pf);//值传递
	pf == NULL;
return 0;
}
