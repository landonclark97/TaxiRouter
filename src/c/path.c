/*
Implementation of paths


METHODS:


*/


#include "../defs/types.h"
#include "../defs/const.h"

#include "../h/path.h"


path* new_path(edge *e) {
    path* pth;

    pth = (path*) malloc(sizeof(path));

    pth->curr_road = e;
    pth->next_path = NULL;

    return pth;
}

void append_path(path *begin, path *end) {
    begin->next_path = end;
}

int path_weight(path *start) {
    int sum = 0;
    while(start->next_path != NULL) {
        sum += start->curr_road->weight;
        start = start->next_path;
    }
    sum += start->curr_road->weight;
    return sum;
}

void delete_path(path **old) {
    (*old)->curr_road = NULL;
    (*old)->next_path = NULL;

    free(**old);
    (*old) = NULL;
}


void delete_full_path(path **head) {
    while((*head)->next_path != NULL) {
        delete_full_path(&(*head)->next_path);
    }
    delete_path(head);
}