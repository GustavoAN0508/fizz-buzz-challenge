#include <stdio.h>
#include <stdlib.h>

int main (void){
    for(int a = 0; a < 100; a++){
        if (a % 3 == 0)
            printf("fizz\n");
        else if (a % 5 == 0)
            printf("buzz\n");
        else
            printf("%d\n", &a);
    }
}
