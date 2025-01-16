#include <stdio.h>

int main() 
{
    unsigned int num = 25; // 0001 1001 in binary

    // 1. Check if a bit is set (e.g., check if the 3rd bit is set)
    // if (num & (1 << 2)) 
    // { // 1 << 2 = 0000 0100
    //     printf("3rd bit is set\n");
    // } else 
    // {
    //     printf("3rd bit is not set\n");
    // }

    // 2. Set a bit (e.g., set the 2nd bit)
    // num = num | (1 << 1); // 1 << 1 = 0000 0010
    // printf("Number after setting 2nd bit: %u\n", num);

    // 3. Clear a bit (e.g., clear the 5th bit)
    // num = num & ~(1 << 4); // 1 << 4 = 0001 0000, ~(1 << 4) = 1110 1111
    // printf("Number after clearing 5th bit: %u\n", num);

    // 4. Toggle a bit (e.g., toggle the 0th bit)
    num = num ^ (1 << 0); // 1 << 0 = 0000 0001
    printf("Number after toggling 0th bit: %u\n", num);

    // // 5. Swap two numbers using XOR
    // int a = 10, b = 20;
    // printf("Before swap: a = %d, b = %d\n", a, b);
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}