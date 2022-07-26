char buf[1024] = { 0 };  //读文件
	FILE* pf = fopen("Example.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fgets(buf, 1024, pf); //读取行 会发生自动换行的现象
	printf("%s", buf); 
//可以替换成puts(buf);
	fclose(pf);//关闭文件
	pf = NULL;
