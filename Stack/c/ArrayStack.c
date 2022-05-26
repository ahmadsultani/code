#include <stdio.h>

int isEmpty();
int isFull();
void peek();
void push(int);
void pop();
void print();

int maks = 3;
int top = -1;
int stack[3];

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    peek();
    return 0;
}

int isEmpty() {
    return top < 0;
}

int isFull() {
    return top == maks-1;
}

void peek() {
    if (isEmpty()) {
        printf("Stack kosong\n");
    } else {
        printf("Top stack adalah %d\n", stack[top]);
    }
}

void push (int data) {
    if (isFull()) {
        printf("Stack penuh\n");
    } else {
        printf("Menambahkan %d ke stack\n", data);
        stack[++top] = data;
    }
}

void pop () {
    if (isEmpty()) {
        printf("Stack kosong\n");
    } else {
        printf("Data yang dihapus adalah %d\n", stack[top--]);
    }
}

void print() {
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
}