#ifndef PATH
#define PATH

#include "../defs/const.h"
#include "../defs/types.h"


path* new_path(edge *e);

void append_path(path *begin, path *end);

int path_weight(path *start);

void delete_path(path **old);

void delete_full_path(path **head);

#endif