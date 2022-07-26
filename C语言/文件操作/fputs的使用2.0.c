char buf[1024] = { 0 };  //读文件
	FILE* pf = fopen("Example.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fputs("hello\n", pf);
	fputs("god", pf); //将这些东西存到文件中
	fclose(pf);//关闭文件
	pf = NULL;
return 0；
