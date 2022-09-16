#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include<stdlib.h>
#define MaxSize 50
typedef int ElemType;
typedef struct
{
	ElemType data[MaxSize];		//存放顺序表元素
	int length;					//存放顺序表的长度
} SqList;


void CreateList(SqList*& L, ElemType a[], int n);
void DestroyList(SqList*& L);
void InitList(SqList*& L);
bool ListEmpty(SqList* L);
int ListLength(SqList* L);
void DispList(SqList* L);
bool GetElem(SqList* L, int i, ElemType& e);
bool ListDelete(SqList*& L, int i, ElemType& e);
int LocateElem(SqList* L, ElemType e);
bool ListInsert(SqList*& L, int i, ElemType e);


int main() {
	SqList* L ;
	int a, b, c, d, e, f;
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;
	InitList(L);
	ListInsert(L, 1, a);
	ListInsert(L, 2, b);
	ListInsert(L, 3, c);
	ListInsert(L, 3, d);
	ListInsert(L, 2, e);
	DispList(L);
	printf("\n");
	printf("the length of Sqlist is: %d\n", ListLength(L));
	if (ListEmpty(L)) {
		printf("L is empty.\n");
	}
	else {
		printf("L is not empty.\n");
	}
	printf("the fourth number is:%d\n", GetElem(L, 4, f));
	printf("the b is in %dth\n", LocateElem(L, b));
	ListInsert(L, 1, f);
	DispList(L);
	ListDelete(L, 3, f);
	DispList(L);
	DestroyList(L);
	system("pause");

}