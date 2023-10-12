#include "list.h"
#include <stdlib.h>

void list_add_first(int val, list *l) {
    node *p = node_new(val, l->first);
    l->first = p;
    l->size++;
}