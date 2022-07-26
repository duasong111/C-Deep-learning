 //对于结构体数组的初始化，数组在外
struct student
{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
 
};
struct student stu[3];
//对于结构体数组的初始化，数组在里边
struct student
{
    int num;
    char sex; 
}stu[3] = { {1,'A'},{2,'B'},{3,'C'} };
