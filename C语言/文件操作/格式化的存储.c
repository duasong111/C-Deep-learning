//上边的和上一个代码一样
struct S s = {0};
	FILE* pf = fopen("Example.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
 
	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
    printf("%d %f %s\n", s.n, s.score, s.arr);
	fclose(pf);
	pf = NULL;
 
return 0;
