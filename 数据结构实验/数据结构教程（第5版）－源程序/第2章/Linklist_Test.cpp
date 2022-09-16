//
// Created by 36126 on 2022/9/8.
//
#include<iostream>
#include "linklist.cpp"

using namespace std;

void ReverseCreateLNode(LNode*& L) {
    LNode* temp = L;
    LNode* reverse;
    InitList(reverse);
    while (temp->next!= NULL) {
        temp = temp->next;
        LNode* q;
        q = (LNode*)malloc(sizeof(LNode));
        *q = *temp;
        q->next = reverse->next;
        reverse->next = q;
    }
    DestroyList(L);
    L = reverse;
}

int main(){
    LinkNode * L1;
    InitList(L1);    //初始化单链表L1
    ListInsert(L1,1,1); 
    DispList(L1);    //按顺序插入元素1，2，8，4
    ListInsert(L1,2,8);
    DispList(L1);
    ListInsert(L1,3,4);
    DispList(L1);
    ListInsert(L1,2,2);
    DispList(L1);
    int a = 0;
    ListDelete(L1,1,a);
    DispList(L1);    //删除链表首节点
    cout<< ListLength(L1)<<endl;   //输出链表的长度
    cout<< LocateElem(L1,8)<<endl;  //输出元素8的位置
    ReverseCreateLNode(L1);
    DispList(L1);
}
