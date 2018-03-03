#include<stdio.h>
void main()
{
 int num,rem,count=0,a;
 while(num>0)
 {
  a=(num/2)*2;
  rem=num-a;
  if(rem==1)
  {
    count++;
  }
   num=num/2;
  }
printf("%d",count);
}