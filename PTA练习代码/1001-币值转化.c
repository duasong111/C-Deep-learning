/*7-3 币值转换
输入一个整数（位数不超过9位）代表一个人民币值（单位为元），请转换成财务要求的大写中文格式。如23108元，转换后变成“贰万叁仟壹百零捌”元。为了简化输出，用小写英文字母a-j顺序代表大写数字0-9，用S、B、Q、W、Y分别代表拾、百、仟、万、亿。于是23108元应被转换输出为“cWdQbBai”元。

输入格式：
输入在一行中给出一个不超过9位的非负整数。

输出格式：
在一行中输出转换后的结果。注意“零”的用法必须符合中文习惯。

输入样例1：
813227345
输出样例1：
iYbQdBcScWhQdBeSf
输入样例2：
6900
输出样例2：
gQjB  */
 // Code 
#include<stdio.h>
#include<math.h>
void shuchu(int i);
int main(){
    int n, m;
    scanf("%d", &n);
    m = n;
    int flag = (m % (int)pow(10,8)) / pow(10,4);	        //检查万位到亿位间是否为0
    int i = 0;
    int w[9]={-1, -1, -1, -1, -1, -1, -1, -1, -1};
    if (n == 0) {
        printf("a");
    }
    else {
        for ( i = 0; n != 0; ++i) {
            w[i] = n % 10;
            n /= 10;   //将某一位的数字输出来
        }
        for ( i = 8; i >= 0; --i ) {
            if ( w[i] != -1) {
                if ( flag && i==4 && w[i]==0) {             //检查万位,若万位-千万位有数并且万位是0则输出“万”
                   printf("W");
                }
                else if ( w[i] == 0 && w[i-1]==0  ) {       //连续的0不输出，直到不为0前一位的0才输出
                  continue;
                }
                else if ( w[i] == 0 ) {
                    printf("a");
               }
                else {                                      //非0正常输出并输出单位
                    printf("%c", 97+w[i]);
                    shuchu(i);
                }
            }
        }
    }
    return 0;
}

void shuchu(int i){
    switch(i) {
        case 1:
        case 5: printf("S"); break;
        case 2:
        case 6: printf("B"); break;
        case 3:
        case 7: printf("Q"); break;
        case 4: printf("W"); break;
        case 8: printf("Y"); break;

    }
} 
