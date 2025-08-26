#ifndef _LINEAR_LIST_H
#define _LINEAR_LIST_H

#include <stdio.h>
#include <stdlib.h>

/*
brief: 单链表节点
description:
    定义了一个链表的节点
    val:        节点的数值
    next:       指向下一节点的指针
    *List_Node: 定义该结构体指针，方便调用        
*/

typedef struct linear_list
{
    int val;
    struct linear_list* next;
}*List_Node;

// functions

/*
brief:初始化表
description:
    input:       None
    output:      一个指向节点的指针
*/
List_Node INIT_LINEAR_LIST_NODE();

#endif