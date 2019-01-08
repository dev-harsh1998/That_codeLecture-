#include <stdio.h>

void hello(){
    printf("\nHello, World!\n");
}

int *sum_it(int *a, int *b){
    int c;
    int *ptr;
    ptr = &c;
    c = *a + *b;
    return ptr;
}

int main(){
    int x = 1; int y = 4; int *k;
    k = sum_it(&x, &y);
    printf("\n%d \n",*k);
    hello();
    printf("\n%d \n",*k); // Magic
    return 0;
}