#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;// character variable is initialised
    char *ptr;//character pointer variable is initialised

    a = 'A';//
    ptr = &a;/* address of the a is stored in the ptr. 
    ptr can only store addresses and not values because we defined ptr as a pointer variable */

    printf("Value of a is %c\n",a);//the value of a which is A is printed
    printf("Address of ptr is %p\n",&ptr);//the address of ptr(&ptr) is printed 
    printf("Address of a is %p\n", &a);//the address of a is printed	
    printf("%c",*ptr);/* Here ptr is being dereferenced. 
    Which means, firstly, the memory location ptr (which stores the address of a) will be retrieved. 
    Next, the value stored in the memory location ptr, which is the address of memory location a is retrieved. 
    Next, the value stored in the memory location a, which is A is retrieved.*/
}
