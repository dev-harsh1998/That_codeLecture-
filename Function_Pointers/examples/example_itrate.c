/* Mapping + pointer array */
#include <stdio.h>

typedef int(*luckyyou)(int, int);

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int multi(int a, int b){
    return a*b;
}

int divi(int a, int b){
    if(b < 1) return 0;
    return a/b;
}

int main(){
    luckyyou kek[]={add, sub, multi, divi}; int wew,ch=0; wew = ch;
    // Now kek is the function ponter variable that maps all 4 functions let's kill switch case invoke the functions based on params :)?
    scanf("%d",&ch);
    while(ch < 3 && ch < 0){
    wew = kek[ch](10,2);
    break;
    }
    if(wew)
        printf("%d\n", wew);
    else
        printf("\nSad :(\n");
    return 0;
}