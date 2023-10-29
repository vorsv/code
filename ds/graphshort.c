#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

#define V 10

int min_dis(int dist[],bool a[]){
    int min=INT_MAX;
    for(int i =0 ; i<V ; i++){
        if(!a[i] && dist[i] < min){
            min=dist[i],
    }
}