#include <string.h>
#include <stdio.h>
#include <stdlib.b>
 
struct student
{
    long num;
    char name[20];
    char sex;
    float score;
};
 
void main()
{
    struct student stu_1;
    struct student *p;  //定义一个相同类型的指针，*同类型*
    p = &stu_1;
    stu_1.num = 89101;
    strcpy(stu_1.name, "Li Lin");
    stu_1.sex = 'M';
    stu_1.score = 89.5;
    printf("NO. :%ld\nname: %s\nsex:%c\nscore:%f\n", stu_1.num, stu_1.name, stu_1.sex, stu_1.score);
    printf("NO. :%ld\nname: %s\nsex:%c\nscore:%f\n", (*p).num, (*p).name, (*p).sex, (*p).score);
//对于指针其实可以换个方式
(*p).score 等价于 p->score
  
}
