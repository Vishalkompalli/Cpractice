#include "palint.h"

int main()
{int num,res;
    printf("Enter a number");
    scanf("%d",&num);
    res=palcheck(num);// palcheck function call

if(num==res) // comparing num with res
printf("It is a palindrome");
else
    printf("Not a palindrome");
}
