#ifndef LIST_H
#define LIST_H


#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int dat;
    node *nxt;
    node *pre;
} node;

typedef struct list{
    node *head;
    node *cpos;
    int size;
} list ;

list init() {
    list *list1=(list*)malloc(sizeof(list));
    node **head = list1->head, **cpos = list1->cpos;
    (*head) = NULL;
    *cpos   = NULL;
    list1->size = 0;
    return  (*list1);
}

void ins(list *list,int data){
    node *node=(node*)malloc(sizeof(node));
    node *curr = list->cpos;
    node->dat=data;
    if((list->cpos)==NULL){
        node->nxt=NULL;
        node->pre=NULL;
        list->head = node;
        list->cpos = node;
        list->size++;
    }else{
        // while(node->nxt != NULL){
        //     curr = curr -> nxt;
        // }
        curr->nxt = node;//}
        node->pre = curr;//}O(1) implementation for insertion
        node->nxt = NULL;//}
    }
}