#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void print();
void addAtHead(int);
void addAtTail(int);
void addAtIndex(int, int);
void deleteAtIndex(int);
void search(int);

Node* head = NULL;

int main() {
    addAtHead(12);
    addAtHead(11);
    print();
    return 0;
}

void print() {
    if (head == NULL) printf("List is empty\n");
    else {
        Node* temp = head;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
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
    if (head == NULL) {
        head = malloc(sizeof(Node));
        head->data = data;
        head->next = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    temp->next = newNode;
}

void addAtindex(int data, int index) {
    if (index == 0) addAtHead(data);
    else {
        Node* temp = head;
        int tempIndex = 0;
        while(temp->next != NULL) {
            if (tempIndex == index - 1) {
                Node* newNode = malloc(sizeof(Node));
                newNode->data = data;
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            temp = temp->next;
            tempIndex++;
        }
        printf("Index out of range\n");
    }
}

void deleteAtIndex(int index) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    } else if (index == 0) {
        head = head->next;
        return;
    } else {
        Node* temp = head;
        int tempIndex = 0;
        while (temp->next != NULL && tempIndex < index) {
            temp = temp->next;
            tempIndex++;
        }
        if (temp->next != NULL) temp->next = temp->next->next;
        else printf("Index out of range!\n");
    }
}