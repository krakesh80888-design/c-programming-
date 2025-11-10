#include<stdio.h>
int main()
{
const int maxScore=100;
volatile int sensorValue=50;
printf("constant value:%d\n",maxScore);
printf("volatile value:%d\n",sensorValue);
return 0;
}
