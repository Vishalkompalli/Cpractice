#include "palindromecheck.h"
int palcheck(char str[20])

{int i=0,length,flag=0;


length = strlen(str);

for(i=0;i < length ;i++){
        if(str[i] != str[length-i-1]){
            flag = 1;
            //return 0;
            break;
           }
        }return flag;
}
