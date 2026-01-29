#include<stdio.h>
struct student
{
int id;
char name[20];
};
void display(struct student*s1)
{
printf("ID:%d\n",s1->id);
printf("Name:%s\n",s1->name);
}
int main()
{
struct student s1={101,"Rahul"};
display(&s1);
return 0;
}
