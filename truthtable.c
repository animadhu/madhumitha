#include<stdio.h>
int result(int val)
{
    if(val==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {
    int a,b,c,d,e;
    scanf("%d %d %d",&a,&b,&c);
    d=(a||b||c);
    e=result(d);
    printf("%d %d %d %d\n",a,b,c,e);
    return 0;
}
