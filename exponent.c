#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void poweroftwo(int n)
{ 
    for(int i=1; i<5; i++)
    {
        if(pow(2,i) == n)
        {
            printf("power of 2\n");
            break;
        }   
        else
        {
            printf("It's not\n");
        }
    }
        
           
}
    
 
    



int main()
{  int num = 8;

    poweroftwo(num);
    
}