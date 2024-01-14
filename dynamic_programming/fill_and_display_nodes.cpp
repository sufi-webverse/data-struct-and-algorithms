
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
} *head=NULL;

void insert(struct Node **head_ptr, int data){
    cout << *head_ptr << endl;
    struct Node *current=new Node;
    current->data=data;
    current->next=NULL;

    struct Node *ptr;

    if(*head_ptr==NULL){
        (*head_ptr) = current;
    }
    else{
        // search NULL
        ptr = *head_ptr;
        while((ptr)->next != NULL){
            (ptr) = (ptr)->next;
        }
        ptr->next = current;
    }
}

void createLL(int *A, int n){

    // 1,2,3,4,5
    for (int i = 0; i < n; i++) {
        cout << &head << endl;
        insert(&head, A[i]);
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
    display(head);
}