#include <stdio.h>
#include <stdlib.h>


struct student
{
   char name[10]; 
   int rollno;
   
};


int main()
{
    struct student s1 = {"Vishal", 1};
    printf("%s\n",s1.name);
    printf("%d",s1.rollno);
}
