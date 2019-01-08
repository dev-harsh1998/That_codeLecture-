#include <stdio.h>


// CODE BELOW
typedef void(*ptr2func)(void);

/*
*
* How to read function pointers?
* Here the actual function pointer is 
* void(*)(void)
* ptr2func is actually the typedef for the above variable which can later be used to point at the function of same nature.
* Reading them is easy void at the start tells the return type of the function to which the fucntion pointer will point to
* the (*) is the actual pointer
* the void at the end represents the parameters that the function takes as input here void means nothing.
*
*/

void print_hello_world(void){
    printf("\nHello, World\n");
}

void point_to_something_else(void){
    printf("\nThis is another function to which yo! would point to\n");
}

int main(){

    ptr2func yo; //Here we have created a variable of ptr2func and called it yo.
    yo = print_hello_world; // Yo now points to the first example function
    yo(); //This should invoke the fist function 


    void (*This)(void) = point_to_something_else; //Another defination function pointer to point to functions of similar type.
    //This(); // Let's invoke the second one.

    yo = This; //since yo and This are of same type they can point to each other
    yo(); // Yo should now call the second example function

    return 0;
}