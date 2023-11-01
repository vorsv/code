#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 100
int ptr =0,top=-1;
char stk[max],a[]="87+54*87-7",b[max],g[max];

void push(char t){
    stk[++top]=t;
}
int pop(){
    if(top==-1) printf("stk is empty \n");
    else return[top--];
}
const char* chara(const char* str){
    int i=0;
    g="";
    g=strcat(g,str[i++]);
    while(isdigit(str[i])){
        g=strcat(g,str[i]);
        i++;
    }
}
int isnum(const char* a){
    return isdigit(a[0]);
}

void main(){
    
}