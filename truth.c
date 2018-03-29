#include<stdio.h>

int main() 
{
    int a,b,c,d,e=0;
    printf("X Y Z OUTPUT\n");
    for(a=0;a<=1;a++)
    {
        for(b=0;b<=1;b++)
        {
            for(c=0;c<=1;c++)
            {
                d=a||b||c;
                if(d==1)
                {
                    printf("%d %d %d %d\n",a,b,c,d);
                }
                else
                {
                    printf("%d %d %d %d\n",a,b,c,e);
                }
            }
        }
    }
}
