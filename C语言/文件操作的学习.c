#include <stdio.h>
#include <errno.h>
#include <string.h>
struct S
{
	int n;
	float score;
	char arr[10];

};

int main()
{
	/*int a = 10000;
	FILE* pf = fopen("//Example.txt", "wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;*/

	//FILE* pf=fopen("Example.txt", "r");
	//if (pf == NULL)
	//{
	//	//文件失败
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	////fputc('A', pf); //写 
	////fgetc(pf);     读
 //printf("%c", fgetc(pf)); //输出
	//但是一次只是读一个
	//fclose(pf);//值传递
	//pf == NULL;
	
	//文件指针


	//int ch = fgetc(stdin); //从标准输入流中来读取信息
	//fputc(ch, stdout); //输出 --但是只是单字节的

	//FILE* pf = fopen("Example.txt", "w");
	//if (pf == NULL) {
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	//fclose(pf);//关闭文件
	//pf = NULL;

	//char buf[1024] = { 0 };  //读文件
	//FILE* pf = fopen("Example.txt", "r");
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	////读取成功
	//fgets(buf, 1024, pf); //读取行
	//printf("%s", buf);
	//fgets(buf, 1024, pf);
	//puts(buf); //也可以来输出

	////所有输出流
	//fputs("hello\n", pf); //搞到数组里去
	//pf 是哪个文件流

	/*char buf[1024] = { 0 };
	fgets(buf, 1024, stdin);
	fputs(buf, stdout);*/

	/*struct S s = {0};
	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);*/

	//struct S s = {32,2.23f,"zhg" };
	//FILE* pf = fopen("Example.txt", "w");
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	////这个是指写到文件之中  放进去了 
	//fprintf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
	////
	//fclose(pf);
	//pf = NULL;


	//将结构体俩转化为字符串
	struct S s = { 100,3.16f,"abcd" };
	struct S tmp = { 0 };
	char buf[1024] = { 0 };
	//将格式化的数据转化成字符串储存在buf中
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	//printf("%s\n", buf);
	//从buf中读取格式化的数据到tmp中
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);

	
	return 0;
}
