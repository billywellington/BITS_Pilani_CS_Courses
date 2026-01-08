//
// Created by billy on 2025/12/14.
//
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

LIST createNewList()
{
    // TODO: Allocate memory for a linked_list structure
    LIST myList = (LIST)(malloc(sizeof(struct list)));


    // TODO: Initialize the node count to zero
    myList->count = 0;

    // TODO: Initialize the head pointer to NULL
    myList->head = NULL;

    // TODO: Return the created list
    return myList;
}

NODE createNewNode(int value)
{
    // TODO: Allocate memory for a node structure
    NODE myNode = (NODE)(malloc(sizeof(int)));
    // TODO: Store the given value in the node
    myNode->element = value;
    // TODO: Set the next pointer to NULL
    myNode->next = NULL;

    // TODO: Return the created node
    return myNode;
}

void printList(LIST l1)
{
    // TODO: Start from the head of the list
    // TODO: Traverse the list node by node
    // TODO: Print each element in a readable format
    // Hint: stop when the current node becomes NULL
}

void insertFirst(NODE n1, LIST l1)
{
    // TODO: Check if the list is empty
    // If empty:
    //   - Make the new node the head
    // If not empty:
    //   - Point the new node to the current head
    //   - Update the head to the new node
    // TODO: Increment the node count
}

void insertEnd(NODE n1, LIST l1)
{
    // TODO: Check if the list is empty
    // If empty:
    //   - Make the new node the head
    // If not empty:
    //   - Traverse until the last node
    //   - Link the last node to the new node
    // TODO: Increment the node count
}

void deleteFirst(LIST l1)
{
    // TODO: Check if the list is empty
    // If empty:
    //   - Print an error message
    // If not empty:
    //   - Store the current head in a temporary pointer
    //   - Move the head to the next node
    //   - Free the removed node
    //   - Decrement the node count
}

void deleteEnd(LIST l1)
{
    // TODO: Check if the list is empty
    // If empty:
    //   - Print an error message
    // If not empty:
    //   - Traverse the list keeping track of the previous node
    //   - Stop at the last node
    //   - Set the previous node's next pointer to NULL
    //   - Free the last node
    //   - Decrement the node count
}

void insertAfter(LIST l1, int ele, NODE n1)
{
    // TODO: Traverse the list starting from the head
    // TODO: Search for the node containing the given element value
    // If found:
    //   - Link the new node after the found node
    //   - Update pointers correctly
    //   - Increment the node count
    // If not found:
    //   - Print an appropriate message
}

void delete(LIST l1, int ele)
{
    // TODO: Check if the list is empty
    // TODO: Handle the case where the node to delete is the head
    // TODO: Traverse the list to find the node with the given value
    // TODO: Update links to bypass the node to be deleted
    // TODO: Free the deleted node
    // TODO: Decrement the node count
}

