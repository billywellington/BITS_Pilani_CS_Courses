#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning
struct Node* insertFirst(struct Node* head, int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = data;   // set node data
    newNode->next = head;   // link new node to previous head
    return newNode;         // return new node as new head
}
int main(void) {
    struct Node* head = NULL;   // empty list

    head = insertFirst(head, 10);
    head = insertFirst(head, 20);
    head = insertFirst(head, 30);

    // Print list
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
