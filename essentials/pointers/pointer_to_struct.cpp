
#include<stdlib.h>
#include<iostream>

using namespace std;

struct Rectangle {
    int l, b;
};

int main(){

    struct Rectangle r = {3,4};
    cout << r.l << endl;
    
    struct Rectangle *p=&r;
    (*p).l=10;
    p->l=20;
    
    cout << p->l << endl;
    cout << p->b << endl;

    // heap allocation
    int *p1;
    p1= (struct Rectangle*)malloc(sizeof(struct Rectangle));
    // p1 = new Rectangle;
    p1->l=15;
    p1->b=10;
}