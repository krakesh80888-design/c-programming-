#include<stdio.h>
int main()
{
float m1,m2,m3,total,average;
char grade;
printf("enter marks for three subjects(out of 100):");
scanf("%f%f%f",&m1,&m2,&m3);
total=m1+m2+m3;
average=total/3;
printf("\ntotal marks=%.2f",total);
printf("\naverage marks=%.2f",average);
if(average>=90)
grade='a';
else if(average>=80)
grade='b';
else if(average>=70)
grade='c';
else if(average>=60)
grade='d';
else if (average>=50)
grade='e';
else
grade='f';
printf("\ngrade=%c",grade);
return 0;
}
