#include <stddef.h>

struct Node {
    int val;
    struct Node* next;
};

struct Node* reverse_list(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next_node = NULL;

    while (current != NULL) {
        next_node = current->next;
        current->next = prev;
        prev = current;
        current = next_node;
    }

    return prev;
}