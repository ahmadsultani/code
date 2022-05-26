#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int data;
    Node *next;
};

int isEmpty();
int isFull();
void peek();
void push(int);
void pop();
void print();

Node* top;
int count = 0;

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    peek();
    pop();
    pop();
    print();
    push(8);
    print();
    return 0;
}

int isEmpty() {
    return count == 0;
}

void peek() {
    if (isEmpty()) {
        printf("Stack kosong\n");
    } else {
        printf("Top stack adalah %d\n", top->data);
    }
}

void push (int data) {
    Node* temp = malloc(sizeof(Node));
    temp->data = data;
    temp->next = top;
    top = temp;
    count++;
}

void pop () {
    if (isEmpty()) {
        printf("Stack kosong\n");
    } else {
        printf("Data yang dihapus adalah %d\n", top->data);
        top = top->next;
        count--;
    }
}

void print() {
    if (isEmpty()) {
        printf("Stack kosong\n");
    } else {
        Node* temp = top;
        while(temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}