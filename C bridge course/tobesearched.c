#include "tobesearched.h"

int main()
{int num,search,count=0,rem;
 printf("Enter a number");
 scanf("%d",&num);
 printf("Enter a number to be searched");
 scanf("%d",&search);
 while(num>0)
 {rem=num%10;
 if (rem==search)
  {
      count++;
  }
  num=num/10;

 }
 printf("%d",count);

}

