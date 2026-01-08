#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(void) {
    struct Node *node1 = (struct Node *) malloc(sizeof(struct Node));
    if (node1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    node1->data = 14;
    node1->next = NULL;

    printf("Value of data is %d\n", node1->data);

    free(node1); // release memory
    return 0;
}
