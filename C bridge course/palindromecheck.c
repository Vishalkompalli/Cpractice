#include "palindromecheck.h"

int main(){ /*System("cls");*/
    char string1[20];
    //int i, length;
    int res=0;

    printf("Enter a string:");
    scanf("%s", string1);
    res=palcheck(string1);

    /*length = strlen(string1);

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }*/

    if (res) {
        printf("%s is not a palindrome", string1);
    }
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}
