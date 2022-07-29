#include<stdio.h>
int main()
{
    int n, b = 0, i = 0;
    char a;                         //a存储所用字符
    scanf("%d %c", &n, &a);
       for ( i= 0; i < n;i++)
    {
        if(2*i*i-1>n)
        {
            i = i - 1; break;
        }
    }                            //i代表倒三角的行数
    n = n - 2*i * i + 1;         //n存放剩余的字符数
    
    for (int j = i; j > 0; j--)
    {
        for (int k = 0; k < i - j; k++)
        {
            putchar(' ');
        }
        for (int k = 1; k < 2 * j; k++)
        {
            printf("%c", a);
        }
        printf("\n");
    }                                       //打印漏斗上半部分
    
    for (int j = 2; j <= i; j++)
    {
        for (int k = 0; k < i - j; k++)
        {
            putchar(' ');
        }
        for (int k = 1; k < 2 * j; k++)
        {
            printf("%c", a);
        }
        printf("\n");
    }                                   //打印漏斗下半部分
    printf("%d", n);                    //输出剩余的字符数
    return 0; 
}
