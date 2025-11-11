#include<stdio.h>
int main()
{
int a=5,b=10;
printf("result 1:%d\n",(a<b)&&(b>0));
printf("result 2:%d\n",(a>b)||(b>0));
printf("result 3:%d\n",!(a==b));
return 0;
}
