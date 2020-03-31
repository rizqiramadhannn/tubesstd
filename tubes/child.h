#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
using namespace std;

typedef string infotype_c;
typedef struct elmList_c *address_c;

struct elmList_c{
    infotype_c info;
    address_c next;
};

struct List_c{
    address_c first;
};

address_c allocate(infotype_c x);
void createList(List_c &L);
void insertJalan(List_c &L);
void insertFirst(List_c &L, address_c P);
void insertLast(List_c &L, address_c P);
void insertAfter(List_c &L, address_c Prec, address_c P);
void deleteFirst(List_c &L, address_c &P);
void deleteLast(List_c &L, address_c &P);
void deleteAfter(List_c &L, address_c Prec, address_c P);
void printInfo(List_c L);


#endif // CHILD_H_INCLUDED
