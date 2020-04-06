#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define tipe(P) P->tipe
using namespace std;

typedef string infotype_c;
typedef struct elmList_c *address_c;

struct elmList_c{
    infotype_c info;
    infotype_c tipe;
    address_c next;
};

struct List_c{
    address_c first;
};

void createList(List_c &L);
void insertJalan(List_c &L, infotype_c x, infotype_c tipe);
void deleteJalan(List_c &L, address_c &P);
void printInfo(List_c L);


#endif // CHILD_H_INCLUDED
