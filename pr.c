#include<stdio.h>
void main()
{
 int number,x,a[1000],i,j=0;
 scanf("%d",&number);
 scanf("%d",&x);
 for(i=0;i<number;i++)
{
 scanf("%d",&a[i]);
}
 for(i=0;i<number;i++)
 {
  if(a[i]==x)
  {
   printf("%d",i);
    j++;
  }
  if(j==number)
  {
   printf("-1);
 }
}
}
 