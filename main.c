#include "linear_list.h"

int main()
{
    List_Node test = INIT_LINEAR_LIST();
    test->val = 999;
    printf("%d\n",test->val);
    return 0;
}