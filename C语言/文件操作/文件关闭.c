//头文件依然是一样，这个也是在main函数中zhixing
int ch = fgetc(stdin); //从标准输入流中来读取信息
	fputc(ch, stdout); //输出 --但是只是单字节的
 
	FILE* pf = fopen("Example.txt", "w");
	if (pf == NULL) {
		printf("%s\n", strerror(errno));
		return 0;
	}
	fclose(pf);//关闭文件
	pf = NULL;
return 0；
