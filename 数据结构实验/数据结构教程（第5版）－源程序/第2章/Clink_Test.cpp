#include<stdio.h>
#include<stdlib.h>
#include "clinklist.cpp"

int main(){
    char string[11] = { 'A', 'B', 'C', 'D', 'A', 'B', 'A', 'B', 'C', 'D', 'E' };
    LinkNode* L1;
    CreateListR(L1,string,11);
    DispList(L1);
    LinkNode* h, * t;
    h = L1->next;
    t = L1->next->next;
    LinkNode* ans[5];
    for(int i = 0;i < 5;++i){
        InitList(ans[i]);
    }
    int cnt = 0;
    LinkNode* head = L1;
    while(cnt < 4){
        if((t->data)!=(h->data)){
            t = t->next;
        }
        else{
            while(h!=t){
                ListInsert(ans[cnt],1,h->data);
                h = h->next;
            }  
            cnt++;
            t = t->next;
        } 
    }
    for(int i = 0;i < cnt;++i){
        DispList(ans[i]);
    }
}