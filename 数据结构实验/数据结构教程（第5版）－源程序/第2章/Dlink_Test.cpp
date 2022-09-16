#include "dlinklist.cpp"
#include<stdio.h>
#include<stdlib.h>

int main(){
    int num, cnt;
    cnt = rand()%7 + 1;     //Create random length for Dlinklist.
    DLinkNode* L1,* L2;   
    InitList(L1);
    InitList(L2);
    for(int i = 0;i < cnt;++i){
        num = rand()%9;
        ListInsert(L1,1,num);
    }
    DispList(L1);
    DLinkNode* tmp;
    tmp = L1->next;
    int a = 0;
    while(tmp!=NULL){
        if(!(tmp->data&1)){
            ListInsert(L2,1,tmp->data);
            ListDelete(L1,LocateElem(L1,tmp->data),a);
        }
        tmp = tmp -> next;
    }
    DispList(L1);
    DispList(L2);
}