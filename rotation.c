#include<stdio.h>
int main()
 {
  int n,a[20],b[20],c[20],d[20],i,y=0,z=0,t=0;
  scanf("%d",&n);
  scanf("%d",&x);
  while(n>0)
  {
   a[i]=n%10;
   n=n/10;
   i++;
   t++;
  
 }
  
 y=0;
  
 for(i=t-1;i>=0;i--)
  
 {
     
       b[y]=a[i];
      
        y++;
  
 }
   y=0;
  
 for(i=0;i<t;i++)
  
 {
     
  if(i<x)
    
   {
          
       c[y]=b[i];
    
        y++;
   
    }
      
 else
    
   {
        
       d[z]=b[i];
    
       z++;
     
  }
  
 }
  
 for(i=0;i<z;i++)
  
    printf("%d",d[i]);
  
 for(i=0;i<y;i++)
  
    printf("%d",c[i]); 

}


