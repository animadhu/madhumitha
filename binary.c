
#include<stdio.h>
void main()
{
int number,rem,count=0;
scanf("%d",&number);
while(number>0)
{
  rem=n%2;
  if(rem==1)
  {
    count++;
    number=number/2;
  }
printf("%d",count); 
}
