#include <stdio.h>
#include <stdlib.h>

/* 大数除法 */

int main(int argc, char *argv[]) {
	char s[1001];
	int b,len,t,temp;
	int i;
	scanf("%s %d", s, &b);
	len = strlen(s);
	t = (s[0]-'0')/b;
	if((t!=0 && len>1) || len==1)
		printf("%d", t);
	temp = (s[0]-'0')%b;
	for(i=1; i<len; i++)
	{
		t = (temp*10+s[i]-'0')/b;
		printf("%d",t);
		temp = (temp*10+s[i]-'0')%b;
	} 
	printf(" %d", temp);
	return 0;
}
