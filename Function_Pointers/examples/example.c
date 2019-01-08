/*
* Let's declare some function pointers and understand how to read them 
*/

#include <stdio.h>

void hello(){
    printf("\nI am your hello, world function\n");
}

#define TP (5)
int main(){

    // Simplest example
    void(*p2func)(void);
/*
 * here p2func is a function pointer variable which is only capable of pointing only to a function which takes no arguments and returns nothinng.
 * How to read?
 * void -> at the begining represents the retun type
 * (*) -> Any and every variable that wants to be a function pointer should be declared inside here the () are important and the * then the variable name helps the compiler to understand that user is trying to declare a function pointer.
 * (void) ->  The void inside the braces at the end represents the variable that the function pointer's pointed function demands here void means the pointed to function needs nothing
 */

// Let's play some games, Tell me to what these below declarations are capable of pointing at?

    //Level: easy
    void(*myptr)(int, int);
    double(*dbl_ptr)(double, double);

    //Level: Mediocre
    int(*some_ptr[TP])(int*, int *);

    //Level: Geek
    void(*ptr)(int(*ptr1)(int, int), float);
    int *(*(*arr[5])())();
    //bsd_signal is already a function
    void (*bsd_signal(int sig, void (*func)(int)))(int); 

    // Let's pont our simplest example to something.
    void(*call_example)(void) = hello;

    // Let's call
    (*call_example)();

    // This is also correct and preffered
    call_example = hello;
    //as explained earlier this can also be used.
    call_example();
}