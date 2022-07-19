#include<stdio.h>
int main(){
	int A,B,sum,i=0,radix,c[31];
	scanf("%d %d %d",&A,&B,&radix);
	sum=A+B;
	if(sum==0)//考虑两者相加为0的情况。 
		printf("0");
	while(sum>0){
		c[i++]=sum%radix;  //十进制转其他进制,用除基取余法
		sum/=radix;   //（不断用商除以基数,然后倒序排列余数）
	}
	for(--i;i>=0;i--)
		printf("%d",c[i]);	
	return 0;
}
