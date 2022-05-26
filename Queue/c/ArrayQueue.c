#include <stdio.h>

int size();
int isEmpty();
int isFull();
void peek();
void enqueue(int data);
void dequeue();
void print();

int maxCapacity = 100;
int tail = -1;
int Q[100];

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
    return tail + 1;
}

int isEmpty() {
    return (size() == 0);
}

int isFull() {
    return (size() == maxCapacity);
}

void peek() {
    if (isEmpty()) {
        printf("Queue kosong\n");
    } else {
        printf("Yang paling depan adalah %d\n", Q[tail]);
    }
}

void enqueue(int data) {
    if (isFull()) {
        printf("Queue penuh\n");
    } else {
        printf("Menambahkan %d ke queue\n", data);
        Q[++tail] = data;
    }
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue kosong\n");
    } else {
        printf("Data yang dihapus adalah %d\n", Q[0]);
        for (int i = 0; i < tail; i++) {
            Q[i] = Q[i+1];
        }
        tail--;
    }
}

void print() {
    for (int i = tail; i >= 0; i--) {
        printf("%d ", Q[i]);
    }
    printf("\n");
}

