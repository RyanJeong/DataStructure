#ifndef __NODE_H__
#define __NODE_H__

typedef struct node {
    int         data;
    struct node *link;
} Node;

typedef struct linkedListType {
    int  currentElementCount;
    Node header;
} LinkedList;

#endif