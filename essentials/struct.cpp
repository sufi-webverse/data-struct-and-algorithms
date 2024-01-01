#include<iostream>
using namespace std;

struct Rectangle{
    int l, b;
    char x;
};

struct Box{
    int s;
} b1, b2;

struct Rectangle r1;
int main(){

    struct Rectangle r2, r3, r4;
    struct Rectangle r5 = { 2, 3};

    cout << sizeof(r5);

    return -1;
}