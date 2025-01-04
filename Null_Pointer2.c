/*The malloc() function returns the NULL pointer when the memory allocation is failed. 
We will use this property to check if the memory allocation is successful.*/


// C Program to use NULL pointer to check for malloc error 
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 

	// declaring dynamic memory for ptr 
	int* ptr = (int*)malloc(0 * sizeof(int)); 

	// checking if the memory allocation is successful 
	if (!ptr) 
    { 
		printf("Memory Allocation Failed"); 
		exit(0); 
	} 
    else
    printf("Memory Allocation successful");

	return 0; 
}
