#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED
#include <iostream>
#include <cstring>
#include "child.h"
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define child(P) P->child
using namespace std;

typedef string infotype_p;
typedef struct elmList_p *address_p;

struct elmList_p{
    infotype_p info;
    address_p next;
    address_p prev;
    List_c child;
};

struct List_p{
    address_p first;
    address_p last;
};

void insertKota(List_p &L);
void createList(List_p &P);
void deleteKota(List_p &L);
void printAll(List_p L);
void printKota(List_p L);
address_p cariKota(List_p L, string key);
void tipeJalan(List_c L);

#endif // PARENT_H_INCLUDED
