

struct Node {
    int data;
    struct Node *next;
}

int main(){
    struct Node *p;
    //p = (struct Node *)(malloc(sizeof(struct Node)));
    p = new Node;
    p->data = 10;
    p->next = 0;
}