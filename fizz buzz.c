#import <stdio.h>
#import <stdlib.h>

int main (void){
    for(int a = 0; a < 100; a++){
        if (a % 3 == 0)
            printf("fizz");
        else if (a % 5 == 0)
            printf("buzz");
        else
            printf("%d", &a);
    }
}