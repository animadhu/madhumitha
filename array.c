// program to print the no of occurences of the given positive numbers.
#include<stdio.h>
void main()
{
    int n=6,a[10]={2,0,1,2,5,1},i,j,count[10];
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            count[i]=1;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count[i]++;
                    a[j]=-2;
                 }
             }
        }     
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-2)
        {    
          printf("%d --> %d\n",a[i],count[i]);
        }
    }
}
