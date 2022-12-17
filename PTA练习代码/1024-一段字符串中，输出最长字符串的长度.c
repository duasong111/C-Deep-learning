#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void findLongest(char str[]);
int main()
{
    char str[1001];
    gets_s(str);//字符串的输入
    findLongest(str); //开始传递给函数进行处理
    return 0;
}
void findLongest(char str[])
{    // 当前长度      最大的长度    当前开始        最大开始
    int currLen = 0, maxLen = 0, currStart = 0, MaxStart = 0;
    int i = 0, j = 0;
    for (i = 0; str[i]; i++) //终止的标志是啥
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (currLen == 0)//当前长度等于0时，说明一个单词刚刚查找完，此时的位置为
                currStart = i;//新单词的开始位置
            currLen++;
        }
        if (currLen > maxLen)//当前单词的长度大于最大值，进行赋值
        {
            maxLen = currLen;
            MaxStart = currStart;
        }
        if (str[i] == ' ')//遇到空格，即一个单词已经结束。
        {
            currLen = 0;
        }
    }
    /*for (j = MaxStart; j < MaxStart + maxLen; j++)
        printf("%c", str[j]);*/
    cout <<maxLen- MaxStart;
}

