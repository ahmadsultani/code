#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int data;
    Node *next;
};

int size(); 
int isEmpty();
void peek();
void enqueue(int data);
void dequeue();
void print();

int count = 0;
Node* first;
Node* last;

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(4);
    peek();
    print();
    dequeue();
    dequeue();
    print();
    return 0; 
}

int size() {
    return count;
}

int isEmpty() {
    return (size() == 0);
}

void peek() {
    if (isEmpty()) {
        printf("Queue kosong\n");
    } else {
        printf("Yang paling depan adalah %d\n", first->data);
    }
}

void enqueue(int data) {
    printf("Menambahkan %d ke queue\n", data);
    if (isEmpty()) {
        first = malloc(sizeof(Node));
        first->data = data;
        first->next = NULL;
        last = first;
    } else {
        Node* temp = malloc(sizeof(Node));
        temp->data = data;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    count++;
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue kosong\n");
    } else {
        printf("Data yang dihapus adalah %d\n", first->data);
        first = first->next;
        count--;
    }
}

void print() {
    Node* temp = first;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

