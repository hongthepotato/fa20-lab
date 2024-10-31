#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node *turtle = head;
    node *hare = head;
    //check for null input
    if (turtle == NULL) {
        return 0;
    }
    hare = (hare->next)->next;
    if (hare == NULL) {
        return 0;
    }
    while (hare != turtle) {
        hare = (hare->next);
        if (hare == NULL) {
            return 0;
        }
        hare = (hare->next);
        if (hare == NULL) {
            return 0;
        }
        turtle = turtle->next;
    }

    return 1;
}