#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<stack>
using namespace std;

typedef struct {
	int data;
	Linklist* next;
}Linklist;

bool IsEmpty(Linklist* L) {
	return L->next == NULL;
}

int ListLength(Linklist* L) {
	int n = 0;
	while (L->next != NULL) {
		L = L->next;
		n++;
	}
	return n;
}

void Initlist(Linklist* L) {
	L = (Linklist*)malloc(sizeof(Linklist));
	L->next = NULL;
}



void EleInsert(Linklist* L, int position, int Element) {
	Linklist* ins = (Linklist*)malloc(sizeof(Linklist));
	ins->data = Element;
	if (position >= ListLength(L)) {
		while (L->next != NULL) {
			L = L->next;
		}
		L->next = ins;
	}
	else {
		for (int i = 0; i < position; ++i) {
			L = L->next;
		}
		ins->next = L->next;
		L->next = ins;
	}
}

int ElePosition(Linklist* L, int target) {
	int ret = 0;
	while (L->next != NULL) {
		L = L->next;
		ret++;
		if (L->data == target) {
			return ret;
		}
	}
	return 0;
}

void EleDelete(Linklist* L, int position) {
	if (position >= ListLength(L)) {
		while (L->next->next != NULL) {
			L = L->next;
		}
		free(L->next);
		L->next = NULL;
	}
	else {
		for (int i = 0; i < position - 1; ++i) {
			L = L->next;
		}
		Linklist* tar = L->next;
		L->next = tar->next;
		free(tar);
	}
}

Linklist* recursionNode(Linklist* L) {
std:stack<Linklist> s;
	while (!IsEmpty(L)) {
		s.push(*L);
		L = L->next;
	}
	Linklist* rev = (Linklist*)malloc(sizeof(Linklist));
	rev->next = NULL;
	while (!s.empty()) {
		rev->next = &s.top();
		rev->next->next = NULL;
		s.pop();
	}
	return rev;
}

int main() {
	Linklist* L1;
	Initlist(L1);
	EleInsert(L1, 1, 1);
	EleInsert(L1, 2, 8);
	EleInsert(L1, 3, 4);
}