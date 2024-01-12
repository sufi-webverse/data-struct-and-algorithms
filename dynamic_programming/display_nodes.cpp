
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
} *first=NULL;

void createLL(int *A, int size){

    //temp pointer
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next=NULL;
    last = first;
    for(int i=1; i<size; i++){
        t = new Node;
        t->data = A[i];
        last->next=t;
        last=t;
    }
}

void display(struct Node *p){
    while(p){
        cout << p->data << endl;
        p=p->next;
    }
}

int main(){

    int A[] = {3,5,7,10,15};
    createLL(A, sizeof(A)/sizeof(A[0]));
    display(first);
}