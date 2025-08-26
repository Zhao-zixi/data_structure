#include "linear_list.h"

List_Node INIT_LINEAR_LIST_NODE()
{
    List_Node Head_Point = (List_Node)(malloc(sizeof(List_Node)));
    // Head_Point->next = NULL;
    return Head_Point;
}
