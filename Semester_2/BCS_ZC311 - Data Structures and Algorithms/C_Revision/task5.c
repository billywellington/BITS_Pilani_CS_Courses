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



int main(void) {
    struct Node* head = NULL;   // empty list

    head = insertEnd(head, 10);
    head = insertEnd(head, 15);
    head = insertEnd(head, 25);
    head = insertEnd(head, 35);

    int search1 = searchNode(head, 10);
    int search2 = searchNode(head, 20);
    int search3 = searchNode(head, 15);
    int search4 = searchNode(head, 40);

    if (search1 == 1){
    printf("Node  with 10 found\n");}
    else {printf("Node  with 10 not found\n");}

    if (search2 == 1){
        printf("Node  with 20 found\n");}
    else {printf("Node  with 20 not found\n");}

    if (search4 == 1){
        printf("Node  with 40 found\n");}
    else {printf("Node  with 40 not found\n");}

    if (search3 == 1){
        printf("Node  with 15 found\n");}
    else {printf("Node  with 15 not found\n");}





    return 0;
}
