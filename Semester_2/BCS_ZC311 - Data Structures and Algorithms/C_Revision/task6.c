#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert a new node at the end of the list
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    // Case 1: empty list
    if (head == NULL) {
        return newNode;
    }

    // Case 2: non-empty list
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

int countNodes(struct Node* head) {
    // Print the list to verify
    struct Node* temp = head;
    int count = 0;
    while (temp!= NULL) {
        temp = temp->next;
        count = count + 1;

    }
    return count;
};

int searchNode(struct Node* head, int key) {
    struct Node* temp = head;
    // int int_temp = key;
    while (temp!= NULL) {
        if (temp->data == key) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;

}

struct Node* deleteNode(struct Node* head, int key) {
    struct Node* temp = head;
    struct Node* prev;
    struct Node* curr;




    // Case 1: empty list
    if (temp == NULL) {
        printf("Head is NULL\n");
        return head;
    }

    // Case 2: deleting first node
    while (temp != NULL) {
        if (temp->data == key) {
            curr = temp;
            if (temp->next == NULL) { // check if this node

            }


    }

    }
}



int main(void) {
    struct Node* head = NULL;   // empty list

    // head = insertEnd(head, 10);
    // head = insertEnd(head, 15);
    // head = insertEnd(head, 25);
    // head = insertEnd(head, 35);

    head = deleteNode(head, 10);





    return 0;
}
