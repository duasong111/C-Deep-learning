#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 80
int main(void)
{
    char a[N], g;
    gets_s(a);
    int i, t;
    i = 0;
    t = strlen(a);
    while (a[i] != '\0') {

        if (a[i] >= 'A' && a[i] <= 'Z') {
            g = 4 + a[i];
            
            printf("%c", g);

        }
        else if (a[i] >= 'a' && a[i] <= 'z') {
            g = 4 + a[i];
            printf("%c", g); //直接输出
        }
        else {
            printf("%c", a[i]); //直接输出
        }
        i++;
    }
    return 0;
}
