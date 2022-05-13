#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    Node* next;
} Node;

Node* head = NULL;

void print() {
    Node* curr = head;
    while (curr != NULL) {
        printf("%d\n", curr->data);
        curr = curr->next;
    }
}

void addAtHead(int data) {
    Node* temp = malloc(sizeof(Node));
    temp->data = data;
    if (head == NULL) {
        head = temp;
        head->next = NULL;
        return;
    } 
    temp->next = head;
    head = temp;
}

void addAtTail(int data) {
    Node* curr = head;
    if (curr == NULL) {
        curr = malloc(sizeof(Node));
        curr->data = data;
        curr->next = NULL;
        return;
    }
    Node* temp = malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
}

int main() {
    
    return 0;
}