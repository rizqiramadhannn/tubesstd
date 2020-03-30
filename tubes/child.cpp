#include "child.h"

address_c allocate(infotype_c x){
    address_c p = new elmList_c;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void createList(List_c &L){
    first(L) = NULL;
}

void insertFirst(List_c &L, address_c P){
    next(P) = first(L);
    first(L) = P;
}

void insertLast(List_c &L, address_c P){
    address_c Q;
    Q = first(L);
    while(next(Q) != NULL){
        Q = next(Q);
    next(Q) = P;
    }
}

void insertAfter(List_c &L, address_c Prec, address_c P){
    if(Prec != NULL){
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteFirst(List_c &L, address_c &P){
    if (first(L) != NULL ){
        P = first(L);
        first(L) = next(P);

        next(P) = NULL;
    }
}
void deleteLast(List_c &L, address_c &P){
    address_c Q;
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

void deleteAfter(List_c &L, address_c Prec, address_c P){
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}

void printInfo(List_c L){
    address_c p = first(L);
    while(p != NULL){
        cout<<info(p)<<", ";
        p = next(p);
    }
    cout<<endl;
}
