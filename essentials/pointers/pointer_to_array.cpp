
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){

    int arr1[10] = {2,3,4,5,6,2,6,7,7,7};
    int *p1;  p1 = arr1;

    cout << *p1 << endl;// 2

    for(int i=0; i<10; i++){
        cout << p1[i] << endl;
    }

    // c method
    int *p2;
    p2 = (int *)malloc(10*sizeof(int));
    free(p2);

    // cpp method
    int *p3;
    p3 = new int[10];
    p3[0]=10; p3[1]=20;p3[2]=30;p3[3]=0;
    for(int i=0; i<10; i++){
        cout << p3[i] << endl;
    }
    delete [] p3;
    return -1;

    int *p_1;
    char *p_2;
    float *p_3;
    double *p_4;
    struct Rectangle *p_5;

    cout << sizeof(p_1) << endl;
    cout << sizeof(p_2) << endl;
    cout << sizeof(p_3) << endl;
    cout << sizeof(p_4) << endl;
    cout << sizeof(p_5) << endl;
}