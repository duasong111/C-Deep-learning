题目
输入 ：Hello World Here I Come
输出 ：Come I Here World Hello

//这个肯定是最优解
#include<stdio.h> 
int main()
{
	int i=0;
	char word[80][81];
  //上，行是记录单词的数量，列是来限定单词的长度
	while(scanf("%s",word[i++])&&(getchar()!='\n'));
   //首先进行输入，并且记忆单词的数量 ，，当每有一个空格的时候那个i会主动的增加1 的，当遇到空格就是结束
	while(--i)
		printf("%s ",word[i]);
	printf("%s",word[0]);
	return 0;
}
//方法二
#include<stdio.h>
#include<string.h>
 
int main()
{
	char str[90];
	gets(str);
	int len=strlen(str),r=0,h=0;//r为行，h为列 
	char ans[90][90];//ans[0]~ans[r]存放单词
	for (int i=0;i<len;i++){
		if(str[i]!=' '){//不是空格则存放至ans[r][h],并令h++ 
			ans[r][h++]=str[i];
		}else{//是空格则说明一个单词结束，行r增一，列h恢复至0 
			ans[r][h]='\0';//末尾是结束符\0 
			r++;
			h=0;
		}
	}
	for (int i=r;i>=0;i--){//输出单词 
		printf("%s",ans[i]);
		if(i>0){
			printf(" ");
		}
	}
	return 0;
}
 
 
