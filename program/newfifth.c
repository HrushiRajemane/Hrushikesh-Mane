#include<stdio.h>
int main()
{
  int a,b,c;
  printf("\n Enter the value of a,b,c:");
  scanf("%d%d%d",&a,&b,&c);

  if(a>b)
  {
   if(a>c)
   {
    printf("\n a is greater");
   }
   else
   {
    printf("\n c is greater");
   }
   }
   else
   {
    if(b>c)
    {
    printf("\n b is greater");
    }
    else
    {
     printf("\n c is greater");
    }
   }

   return 0;
  }

