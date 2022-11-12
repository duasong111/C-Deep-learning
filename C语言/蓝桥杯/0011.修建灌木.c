//爱丽丝要完成一项修剪灌木的工作。有 N 棵灌木整齐的从左到右排成一排。爱丽丝在每天傍晚会修剪一棵灌木，让灌木的高度变为 0 厘米。爱丽丝修剪灌木的顺序是从最左侧的灌木开始，每天向右修剪一棵灌木。当修剪了最右侧的灌木后，她会调转方向，下一天开始向左修剪灌木。直到修剪了最左的灌木后再次调转方向。然后如此循环往复。灌木每天从早上到傍晚会长高 1 厘米，而其余时间不会长高。在第一天的早晨，所有灌木的高度都是 0 厘米。爱丽丝想知道每棵灌木最高长到多高。
//输入格式
//一个正整数 N ，含义如题面所述。
//输出格式
//输出 N 行，每行一个整数，第行表示从左到右第 i 棵树最高能长到多高。
//样例输入
//3
//样例输出
//4
//2
//4

#include<stdio.h>
int main()
{
    int n;
    int a[10005];
    scanf("%d", &n);
    if (n % 2 == 0)//n为偶数的时候
    {
        for (int i = 1; i <= n / 2; i++)
        {
            a[i] = 2 * (n - i);
            printf("%d\n", a[i]);
        }
        for (int j = n / 2 + 1; j <= n; j++)
        {
            a[j] = a[n + 1 - j];
            printf("%d\n", a[j]);
        }
    }
    if (n % 2 != 0)//n为奇数的时候
    {
        for (int i = 1; i <= n / 2; i++)
        {
            a[i] = 2 * (n - i);
            printf("%d\n", a[i]);
        }
        printf("%d\n", n - 1);
        for (int j = n / 2 + 2; j <= n; j++)
        {
            a[j] = a[n + 1 - j];//再利用数组这个具有逆换性
            printf("%d\n", a[j]);
        }
    }
    return 0;
}
