#include <stdio.h>

typedef void(*ptr2func)(void);

void print_hello_world(void){
    printf("\nHello, World\n");
}

void point_to_something_else(void){
    printf("\nThis is another function to which yo! would point to\n");
}

int main(){
    ptr2func yo[2];
    /* Yeah we can use function pointers variable as an array of function pointers */
    yo[0] = print_hello_world;
    yo[0]();
    yo[1] = point_to_something_else;
    yo[1]();
    return 0;
}