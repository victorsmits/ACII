#include <stdio.h>
#include <ctype.h>

int main() {
   for(char i = 0;i <= 128;i++){

        if (isprint(i)==1){
            printf("\n%d : %c",i,i);
        }
   }
    return 0;
}