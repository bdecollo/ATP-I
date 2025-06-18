#include <stdio.h>
#include <stdlib.h>

int count = 0;

int main(){
    printf("count = %d\n", count++);
    main();
    return 0;
}