#include <stdio.h>
#include <stdlib.h>

int sum(int , int*);
int main(int argc,char *argv[])
{
  int i,arr[argc-1],res1,res2,res3;
  //int res4;
  
  for(i=0;i<argc-1;i++)
  {
   arr[i]=atoi(argv[i+1]); 
  } 
  
   res1=sum(argc-1,arr);
   res2=avg(argc-1,arr);
   res3=product(argc-1,arr);
   //res4=quotient(argc-1,arr);
   printf("Sum is %d\n",res1);
   printf("Avg is %d\n",res2);
   printf("Product is %d\n",res3);
   //printf("Quotient is %d\n ",res4);
   
}

int sum(int a,int b[])
{int i,sum=0;
 for(i=0;i<a;i++)
 {
 sum+=b[i];
  
 } 
  return sum;
  }
 
 int avg(int a,int b[])
 { int i,sum=0,avg=0;
 for(i=0;i<a;i++)
 {
  sum+=b[i];
  }
  avg=sum/(i-1);
  return avg;
  }
  
  
 int product(int a,int b[])
 { int i,prod=1;
 for(i=0;i<a;i++)
 {
  prod*=b[i];
  }
  
  return prod;
  }
  
 /*int quotient(int a,int b[])
 { int i,quo=0;
 for(i=0;i<a;i++)
 {
  quo/=b[i];
  }
  
  return quo;
  }*/
  
  
