FILE* pf = fopen("Example.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读取成功
	fputs("h", pf); 
	fputs("l", pf);
	fputs("l", pf);
	fclose(pf);//关闭文件
	pf = NULL;
return0 ；
