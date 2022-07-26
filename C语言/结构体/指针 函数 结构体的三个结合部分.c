#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define FORMAT "%d\n%s\n%f\n%f\n%f\n"
 
struct student
{
    int num;
    char name[20];
    float score[3];
};
void print(struct student stu)  //同样在这个函数中也是来一样的类型的
{
    printf("%d\n%s\n%f\n%f\n%f\n", stu.num, stu.score[0], stu.score[1], stu.score[2]);
    printf("\n");
}
void main()
{
    struct student stu;
    stu.num = 12345;
    strcpy(stu.name, "Li Li");
    stu.score[0] = 67.5;
    stu.score[1] = 89;
    stu.score[2] = 78.6;
    print(stu);  //调用一个函数
} 
