//
// Created by billy on 2025/12/14.
//



#ifndef MAIN_H
#define MAIN_H

// TODO: Define an opaque pointer type for NODE
typedef struct Node *NODE;

// TODO: Define the node structure
// Fields to include:
//   - an integer element
//   - a pointer to the next node

struct Node {
    int element;
    struct Node *next;
};

// TODO: Define an opaque pointer type for LIST
typedef struct list *LIST;

// TODO: Define the linked list structure
// Fields to include:
//   - a count of nodes
//   - a pointer to the head node

struct list {
    int count;
    LIST head;
};

// TODO: Declare all list-related functions
// - createNewList
LIST createNewList();
// - createNewNode
NODE createNewNode(int value);
// - printList
void printList(LIST list1);

// - insertFirst
void insertFirst(NODE node1, LIST list1);

// - insertEnd
void insertEnd(LIST list1, NODE node1);

// - deleteFirst
void deleteFirst(LIST list1);

// - deleteEnd
void deleteEnd(LIST list1);

// - insertAfter
void insertAfter(struct Node *new_node, int value, struct list *list1);

// - delete
void delete(int value, struct list *list1);



#endif //MAIN_H