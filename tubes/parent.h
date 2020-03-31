#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
using namespace std;

typedef string infotype_p;
typedef struct elmList_p *address_p;

struct elmList_p{
    infotype_p info;
    address_p next;
    address_p prev;
};

struct List_p{
    address_p first;
    address_p last;
};

void insertKota(List_p &L);
void createList(List_p &P);
void deleteKota(List_p &L);
void deleteFirst(List_p &L, address_p &P);
void deleteLast(List_p &L, address_p &P);
void deleteAfter(List_p &L, address_p Prec, address_p P);
void printInfo(List_p L);


#endif // PARENT_H_INCLUDED
