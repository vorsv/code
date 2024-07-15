#include <iostream>

typedef struct list{
    int dat;
    list *nxt;
    list() : dat(0), nxt(nullptr) {}
} ll;

ll *init(int dat){
    ll *TEMP = new ll;
    return TEMP;
}