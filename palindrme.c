#include<stdio.h>
int rev(int num)
{
   int reverse=0,r=0;
   while(num>0)
   {
       r=num%10;
       reverse=reverse*10+r;
       num=num/10;
   }
   return reverse;
  
}
int main()
{
    int n;
    scanf("%d",&n);
    while(1)
    {
        n++;
           if(rev(n)==n)
           {
                 printf("%d",n);
                 break;
            }
            else
            continue;
   }
   return 0;
}
