#include "parent.h"

address_p allocate(infotype_p x){
    address_p p = new elmList_p;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void createList(List_p &L){
    first(L) = NULL;
    last(L) = NULL;
}

void insertFirst(List_p &L, address_p P){
    next(P) = first(L);
    first(L) = P;
    last(L) = P
}

void insertLast(List_p &L, address_p P){
    address_p Q;
    Q = first(L);
    while(next(Q) != NULL){
        Q = next(Q);
    next(Q) = P;
    }
}

void insertAfter(List_p &L, address_p Prec, address_p P){
    if(Prec != NULL){
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteFirst(List_p &L, address_p &P){
    if (first(L) != NULL ){
        P = first(L);
        first(L) = next(P);

        next(P) = NULL;
    }
}
void deleteLast(List_p &L, address_p &P){
    address_p Q;
    if (first(L) = NULL){
        cout<<"Empty"<<endl;
    } else if(next(first(L)) = NULL){
       P =first(L);
       first(L) = NULL;
    } Q = first(L);
    while (next(next(Q)) != NULL){
        Q = next(Q);
    next(Q) = NULL;
    }

}

void deleteAfter(List_p &L, address_p Prec, address_p P){
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}

void printInfo(List_p L){
    address_p p = first(L);
    while(p != NULL){
        cout<<info(p)<<", ";
        p = next(p);
    }
    cout<<endl;
}
