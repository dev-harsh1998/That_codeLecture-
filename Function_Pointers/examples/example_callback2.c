// Function Genralisation using fuction callbacks
// Let's implement bubble sort with function callback and use it for both inreasing and decreasing
// Make this happen? Yeah sure
#include <stdio.h>
#include <stdlib.h> //using exit
#include <math.h> //useing absolute

typedef int(*func_ptr)(int,int,int*);

/* Lets do the genralisation */
int cmpr_geek(int a, int b, int *ch){
    if(*ch == 0 || *ch == 1){
        //Increasing order
        if(abs(a) > abs(b)) return 1;
        return -1;
    }
    if(*ch == -1){
        //Decreasing order
        if(abs(a) > abs(b)) return -1;
        return 1;
    }
    // Exit in every other case where choice is invalid
    printf("\nExiting the code happens that your choice sucks %d\n", *ch);
    exit(1);
}

void bblsrt(int *Arr /*Array*/, int len /*Length of A*/, 
                int *ch /*Callback genraliser*/, func_ptr callback /*The Magic*/){
        // Tone bubble sort to do what we want
        int i,j,temp;
        for(i=0; i<len; i++)
            for(j=0; j<len-1; j++){
                if(callback(Arr[j], Arr[j+1], ch) > 0){
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                }
            }
}

int main(){
    int i, A[]={-31, 22, -1, 50, -6, 4};
    i = 1;
    bblsrt(A, 6, &i, cmpr_geek);
    //Lets reuse 'i' since work is done its sfe to use it :D
    for(i=0; i<6; i++)
        printf("%d ", A[i]);
    return 0;
    //{-1 4 -6 22 -31 50}
}