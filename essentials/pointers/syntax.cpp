
// for malloc
#include<stdlib.h>

int main(){

    // basics
    int a = 10; // data variable
    int *p; // pointer variable
    p = &a;
    printf("%d", *p);

    // allocate heap memory
    int *p1;

    // 0 | 1 | 2 .... 
    // if address of 0 is 2000 then pointer p1 is holding one end of the array
    p1 =  (int *)malloc(5*sizeof(int)); // malloc returns void pointer so typecast to int pointer

    // for cpp
    p = new int[5];
}