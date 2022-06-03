#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void print(Node*);
void addAtHead(Node*, int);
void addAtTail(Node*, int);
void addAtIndex(Node*, int, int);
void deleteAtIndex(Node*, int);
void search(Node*, int);

int main() {
    Node* test1 = NULL;
    Node* test2 = NULL;
    return 0;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void addAtHead(Node* head, int data) {
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

void addAtTail(Node* head, int data) {
    if (head == NULL) {
        head = malloc(sizeof(Node));
        head->data = data;
        head->next = NULL;
        return;
    }
    Node* temp = malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
}

void addAtindex(Node* head, int data, int index) {
    if (index == 0) addAtHead(head, data);
    else {
        Node* temp = head;
        int tempIndex = 0;
        while(temp->next != NULL) {
            if (tempIndex = index - 1) {
                Node* newNode = malloc(sizeof(Node));
                newNode->data = data;
                newNode->next = temp->next;
                temp->next = newNode;
            }
            temp = temp->next;
            tempIndex++;
        }
    }
}

void deleteAtIndex(Node* head, int index) {
    if (head == NULL) {
        printf("List kosong\n");
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
        else printf("Index out of range!\n", index);
    }
}