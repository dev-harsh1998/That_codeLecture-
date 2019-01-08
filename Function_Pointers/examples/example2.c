#include <stdio.h>

typedef void(*Yo)(void);

void print_hello_world(void){
    printf("\nHello, World\n");
}

void point_to_something_else(void){
    printf("\nThis is another function to which now we would point to\n");
}

/* 
* In this example we will pass function pointer as a parameter to a function and invoke other functions via it.
* Yep a wrapper kind of thing
*/

void caller(Yo kul){
    // Here we have passed kul and let's now invoke it?
    kul();
}

int main(){
    caller(print_hello_world);
    caller(point_to_something_else);
    return 0;
}