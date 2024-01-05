#include <iostream>
using namespace std;

// pass by value
int add_pv(int x, int y){
    return x+y;
}

// pass by address
void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// pass by reference
void swap_byref(int &x, int &y){
    int temp= x;
    x=y;
    y=temp;
}

int main(){
    cout << add_pv(3,4) << endl;
    int a1=10, a2=20;

    swap(&a1, &a2);
    cout << a1 << a2 << endl;

    swap_byref(a1,a2);
    cout << a1 << a2 << endl;
}