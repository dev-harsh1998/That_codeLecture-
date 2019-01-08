//A very very simple implementation of function callback concept.

#include <stdio.h>

typedef int(*foo)();

int func1(){
    printf("Hello, I am function1\n");
    return 0;
}

void func2(foo f){
    f(); // The callback
}

void main(){
    func2(func1);// pass the address of function1 by actually calling function2
}
