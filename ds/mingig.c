#include<stdio.h>
#include<stdlib.h>

struct heap{
    int* arr;
    int siz,cap;
};
typedef struct heap heap;

heap* newHeap(int cap ,int* nums){
    heap * h = (heap*)malloc(sizeof(heap));
    if(h == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }
    h->siz = 0;
    h->cap = cap;
    h->arr = (int*)malloc(cap* sizeof(int));
    if(h->arr == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }
    int i;
    for(i=0 ; i < cap ; i++) h->arr[i] = nums[i];
    h->siz = i;
    i = (h->siz - 2) / 2;
    while(i >= 0){
        heapify(h,i);
        i--;
    }
    return h;
}
void ins(heap* h, int index){
    
}