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

int main(void) {
    struct Node* head = NULL;   // empty list

    head = insertEnd(head, 10);
    head = insertEnd(head, 15);
    head = insertEnd(head, 25);

    // Print the list to verify
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
