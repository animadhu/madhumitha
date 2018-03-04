//Program to find the occurence of vowels in the String
#include<stdio.h>
#include<string.h>
int main() {
   char a[100] = "RMD Engg College", vowels[5] ={'a','e','i','o','u' };
   int count[5] = {0,0,0,0,0},i,b;
   b=strlen(a);
   for(i=0;i<b;i++)
   {
       if(a[i]=='A'||a[i]=='a')
       {
           count[0]++;
       }
       else if(a[i]=='E'||a[i]=='e')
       {
           count[1]++;
       }
       else if(a[i]=='I'||a[i]=='i')
       {
           count[2]++;
           
       }
       else if(a[i]=='O'||a[i]=='o')
       {
           count[3]++;
       }
       else if(a[i]=='U'||a[i]=='u')
       {
           count[4]++;
       }
   }
   
   for(i=0;i<5;i++)
   {
      if(count[i]>0) 
       
       printf("%c --> %d \n",vowels[i], count[i]);
   }
}
