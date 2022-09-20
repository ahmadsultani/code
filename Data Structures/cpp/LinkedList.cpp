#include <iostream>
using namespace std; 

class Node {
public:
    int val;
    Node* next;
    Node() {
        val = 0;
        next = NULL;
    }
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }
    
    int get(int index) {
        int i = 0;
        Node* curr = head;
        if (head == NULL) return -1;
        while (curr->next != NULL && i <= index) {
            if (i == index) break;
            curr = curr->next;
            i++;
        }
        if (i == index) return curr->val;
        return -1;
    }
    
    void addAtHead(int val) {
        Node* curr = new Node(val);
        if (head == NULL) {
            head = curr;
            return;
        }
        curr->next = head;
        head = curr;
    }
    
    void addAtTail(int val) {
        if (head == NULL) {
            addAtHead(val);
        }
        Node* curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = new Node(val);  
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0){
            addAtHead(val);
            return;
        }
        if (head == NULL && index > 0) return;
        
        Node* curr = head; 
        int i = 0;
        while(curr->next != NULL && i < index) {
            if (i == index - 1) break;  
            curr = curr->next;
            i++;
        }
        if (i == index - 1) {
            Node* temp = new Node(val);
            temp->next = curr->next;
            curr->next = temp;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index == 0) {
            head = head->next;
            return;
        }
        Node* curr = head;
        for (int i = 1; i < index && curr->next != NULL; ++i) {
            curr = curr->next;
        }
        if (curr->next != NULL) curr->next = curr->next->next;
    }

    void printList() {
        Node* curr = head;
        cout << "[";
        while(curr != NULL) {
            cout << curr->val;
            if (curr->next) cout << ", ";
            curr = curr->next; 
        }
        cout << "]";
    }

    Node* removeNthFromEnd(Node* head, int n) {
        Node* fast = head;
        Node* slow = head;
        for (int i = 0; i < n; i++) fast = fast->next;
        if (fast == NULL) return head->next;
        while(fast->next != NULL && fast != slow) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }

    Node *getIntersectionNode(Node *headA, Node *headB) {
        Node* tmp1 = headA;
        Node* tmp2 = headB;
        if (tmp1 == NULL || tmp2 == NULL) return NULL;
        while(tmp1 != NULL && tmp2 != NULL && tmp1 != tmp2) {
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
            if (tmp1 == tmp2) return tmp1;
            if (tmp1 == NULL) tmp1 = headB;
            if (tmp2 == NULL) tmp2 = headA;
        }
        return tmp1;
    }

    Node* detectCycle(Node* head) {
        if (head == NULL) return NULL;
        Node* fast = head;
        Node* slow = head;
        while(slow && fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;            
            if (fast == slow) {
                while(head != slow) {
                    slow = slow->next;
                    head = head->next;
                }
                return head;
            }
        }
        return NULL;
    }

    bool hasCycle(Node* head) {
        if (head == NULL) return false;
        Node* fast = head;
        Node* slow = head;
        while(slow && fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow) return true;            
        }
        return false;
    }
};

int main() {
    LinkedList* myList = new LinkedList();
    myList->addAtHead(10);
    myList->addAtTail(11);
    myList->printList();
    return 0;
}