//在结构体中进行初始化
struct student
{
    long int num;
    char name[20];
    char sex;
    char addr[30];
}a = {89031, "Li Lin", 'M', "123 Beijing Road"};
 
//但是这个的结构体的末尾不一样了，外部来进行初始化。
。。。。。。
。。。。。。
   char sex;
    char addr[30];
}；
struct student a = {{10101, "Li Lin", 'M', 18},
 
//main函数中来进行初始化
void main()
{
    struct student a;
    stu.num = 12345;
    strcpy(stu.name, "Li Li"); //字符串不能直接输入，最好运用这个库函数
    stu.score[0] = 67.5; //数组的话添加数组的下标
    stu.score[1] = 89;
    stu.score[2] = 78.6;
}
