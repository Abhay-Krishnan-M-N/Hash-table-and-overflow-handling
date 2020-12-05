#include <stdio.h>
int main()
{
 int a[10],h=11,i,n,e,pos;
 printf("\nEnter number of elements:");
 scanf("%d",&n);
 printf("\nEnter %d elements:",n);
 for(i=0;i<10;i++)
  a[i]=0;
 for(i=0;i<n;i++)
  {
   scanf("%d",&e);
   pos=e%h;
   do
    {
     if(a[pos]==0)
      a[pos]=e;
     else 
      {
       if(pos==9)
        pos=-1;
       pos++;
      }     
    }while(a[pos]!=e);
  }
printf("\n");
for(i=0;i<10;i++)
  if(a[i]!=0)
   printf("\t%d",a[i]);
 return 0;
}
