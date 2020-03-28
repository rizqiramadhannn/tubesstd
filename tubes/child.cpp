#include "child.h"
#include <iostream>

using namespace std;

address allocate(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return P;
}

void insertFirst(List &L, address P){
    next(P) = first(L);
    first(L) = P;
}

void insertLast(List &L, address P){
    address Q;
    Q = first(L);
    while(next(Q) != NULL){
        Q = next(Q);
    next(Q) = P;
    }
}

void insertAfter(List &L, address Prec, address P){
    if(Prec != NULL){
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteFirst(List &L, address &P){
    if (first(L) != NULL ){
        P = first(L);
        first(L) = next(P);

        next(P) = NULL;
    }
}
void deleteLast(List &L, address &P){
    address Q;
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

void deleteAfter(List &L, address Prec, address P){
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}

void printInfo(List L){
    address p = first(L);
    while(p != NULL){
        cout<<info(p)<<", ";
        p = next(p);
    }
    cout<<endl;
}
