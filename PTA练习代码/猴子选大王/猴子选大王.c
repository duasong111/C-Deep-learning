#include <iostream>
using namespace std;
void king(int a[], int n);
int a[1000];
int main()
{
    int n, i;
    cin >> n;
    a[0] = 0; // 0号位置没有猴子
    for (i = 1; i <= n; i++)
        a[i] = i;
    
    king(a, n); //调用函数
    return 0;
}
void king(int a[], int n)
{
    int out = 0; // 出去了几个
    int flag = 0; // 报数号
    int next = 1; // 下一个
    while (out < n - 1)//当out=n-1时停下来，只剩最后一个猴子，那个就是大王，这也就是停止条件
    {
        while (a[next] == 0)
        {
            next++;  // 看下一个位置的猴子
            if (next == n + 1) // 到尾部了，再回到头部
                next = 1;
        }
        flag++; // 报数号加
        if (flag == 3) // 要出去了
        {
        //   
            cout <<a[next] <<" ";
            a[next] = 0;
            next++;
            if (next == n + 1)
                next = 1;
            flag = 0;
            out++;
        }
        else
        {
            next++;
            if (next == n + 1)
                next = 1;
        }
    }
    int i;
    for (i = 1; i < n + 1; i++)
        if (a[i] != 0) //找到最后一只猴子
            cout<<i << endl; 
}
