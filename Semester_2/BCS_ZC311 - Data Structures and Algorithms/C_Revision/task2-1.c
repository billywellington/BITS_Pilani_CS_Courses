/*
 * File: task2.2.c
 * Author: billy
 * Date: 2025/12/20
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

//prototypes
struct Node* insertFirst(int data);


int main(void) {

    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    head->data = 15;
    head->next = NULL;
    // printf("Value is %d", head->data);
    // return 0;

    struct Node* node1 = insertFirst(10);
    struct Node* node2 = insertFirst(20);
    struct Node* node3 = insertFirst(30);

    //chain the nodes together
    node2->next = node1;
    node3->next = node2;

  printf("%d -> %d -> %d -> %s ", node3->data, node2->data, node1->data, head->next);


}

//function def
struct Node* insertFirst(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));

    node->data = data;
    node->next = NULL;
    return node;

};